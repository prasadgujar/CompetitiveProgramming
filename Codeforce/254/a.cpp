#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char s[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '.')
            {
                if ((i + j) & 1)
                {
                    s[j] = 'B';
                }
                else
                {
                    s[j] = 'W';
                }
            }
        }
        cout << s << '\n';
    }
}
