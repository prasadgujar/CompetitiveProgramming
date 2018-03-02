#include <bits/stdc++.h>
using namespace std;
int p, y;

int isprime(int n)
{
    for (int i = 2; i <= p && i * i(n) <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int solve()
{
    cin >> p >> y;
    for (int i = y; i > p; i--)
    {
        if (isprime(i))
        {
            cout << i << '\n';
            return 0;
        }
    }
    cout << -1;
}
int main()
{
    solve();
}