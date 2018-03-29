#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin >> n;
    ll ok = 0;
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ok = ok ^ x;
    }

    if (ok == 0)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << ok << '\n';
    }
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}