#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cn = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            cn++;
        }
    }

    cout << cn << '\n';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}