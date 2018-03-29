#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int res = 0;
    //n = 2*n+1;
    int x;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        res = res | x;
    }
    cout << res << '\n';
}
int main()
{
    int t;
    //cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}