#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll z, n;
    cin >> z >> n;
    bool ok = true;
    ll x;
    //ll z = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        z = z & x;
    }

    if (z == 0)
    {
        cout << "Yes" << '\n';
    }
    else
    {
        cout << "No" << '\n';
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