#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    int found = 0;

    for (int i = 4; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u')
        {
            ;
        }
        else
        {
            found++;
        }
    }
    cout << found + 1 << "/" << n << '\n';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}