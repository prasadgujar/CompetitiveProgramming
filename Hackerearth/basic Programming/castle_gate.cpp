#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            //int xorr = (i)^(i+1);
            if (((i ^ j) <= n) && i != j)
            {
                res++;
            }
        }
    }
    cout << res << '\n';
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