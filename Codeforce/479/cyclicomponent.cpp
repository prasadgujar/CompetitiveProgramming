#include <bits/stdc++.h>
using namespace std;

const int N = 200 * 1000 + 11;

int n, m;
int deg[N];
bool used[N];
vector<int> comp;
vector<int> g[N];

void dfs(int v)
{
    used[v] = true;
    comp.push_back(v);

    for (auto it : g[v])
    {
        if (!used[it])
        {
            dfs(it);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int x, y;
        cin >> x >> y;
        --x;
        --y;
        g[x].push_back(y);
        g[y].push_back(x);
        ++deg[x];
        ++deg[y];
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (!used[i])
        {
            comp.clear();
            dfs(i);
            bool ok = true;
            for (auto v : comp)
                ok &= deg[v] == 2; // if vertex has degree of 2 then ok is true
            if (ok)
                ++ans;
        }
    }

    cout << ans;
    return 0;
}

/**
 17 15
1 8
1 12
5 11
11 9
9 15
15 5
4 13
3 13
4 3
10 16
7 10
16 7
14 3
14 4
17 6

o/p:
2

*/