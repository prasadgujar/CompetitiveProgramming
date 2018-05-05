
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll x;
    cin >> x;
    ll ok = x * (x + 1);
    ok /= 2;
    ll rem = 1;
    while (rem <= x)
    {
        ok -= rem * 2;
        rem *= 2;
    }

    cout << ok << '\n';
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