#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!(i % 3 )&&a !(i % 5 ))
        {
            total += i;
        }

     

    cout << total << '\n';
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