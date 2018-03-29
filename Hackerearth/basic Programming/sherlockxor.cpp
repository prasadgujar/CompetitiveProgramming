#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    long int a = 0;
    long int b = 0;
    long int x;
    for (long int i = 0; i < n; i++)
    {
        cin >> x;
        if (x & 1)
        {
            a++;
        }
        else
        {
            b++;
        }
    }

    cout << a * b << '\n';
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