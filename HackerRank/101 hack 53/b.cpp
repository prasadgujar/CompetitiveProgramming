// Editorial Solution Greedy
#include <bits/stdc++.h>
using namespace std;

const int N = 101;

int dx[] = {0, 0, 1, -1}; // for  traverse
int dy[] = {1, -1, 0, 0};

bool visited[N][N];
int color[N][N];
int n, m, max_col;

bool good(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m && color[x][y] != -1; // check whether cell is out of league or not
}

void dfs(int x, int y, int c, int cnt, int iter = 0)
{
    max_col = max(max_col, c);
    visited[x][y] = 1; // mark as visited
    color[x][y] = c;   // assign c
    if (iter == 0 and cnt == 1)
    {
        if (y == 0) //left most row/cell
        {
            if (color[x][y] == color[x][y + 1])
            {
                return;
            }
        }
        if (y == m - 1) //right most row
        {
            if (color[x][y] == color[x][y - 1])
            {
                return;
            }
        }
    }

    for (int i = 0; i < 4; i++) // check adjacent cells for equality
    {
        int x_ = x + dx[i];
        int y_ = y + dy[i];
        if (good(x_, y_) && !visited[x_][y_]) // if not visited
        {
            dfs(x_, y_, c + (cnt == 1), (cnt + 1) % 2, iter);
            break;
        }
    }
}
int main()
{
    int x, y;
    cin >> n >> m >> x >> y;

    int black = 0;
    int white = 0;
    memset(color, -1, sizeof color);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 && j < x) // this cells are already accuiredy by first x cells left/ upper row
            {
                continue;
            }
            if (i == n - 1 && j + y >= m) // this cells are already accuiredy by first y cells from right most/ bottom row
            {
                continue;
            }
            int cur = (i + j) & 1;
            color[i][j] = 0;
            black += cur;  // no of 0
            white += !cur; // no of 1
        }
    }

    if (black != white) /// if we can not equally distribute the both 0 and 1 then answer is no
    {
        cout << "NO";
        return 0;
    }

    cout << "YES" << '\n';

    dfs(0, x, max_col + 1, 0, 0);   //dfs from top most left (starting/ upper most corner)
    if (!visited[n - 1][m - y - 1]) // if right most cell is not visited then we will do dfs search from that cell
    {
        dfs(n - 1, m - y - 1, max_col + 1, 0, 1);
    }

    int k = (n * m - x - y); // no of free cell divided by 2
    k /= 2;

    vector<int> ans[k];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (color[i][j] > 0) // if we can place domino on that cell
            {
                ans[color[i][j] - 1].push_back(i + 1); // +1 bcoz we start from 0th cell
                ans[color[i][j] - 1].push_back(j + 1); // +1 bcoz we start from 0th cell
            }
        }
    }

    cout << k << endl; // print the k

    // print the indices
    for (int i = 0; i < k; i++)
    {
        for (auto t : ans[i])
        {
            cout << t << " ";
        }

        cout << '\n';
    }

    return 0;
}