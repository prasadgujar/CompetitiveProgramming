#include <bits/stdc++.h>
using namespace std;

bool isSubset(int a[], int n, int sum)
{
    bool subset[n + 1][sum + 1];

    for (int i = 0; i <= n; i++)
    {
        subset[i][0] = true;
    }

    for (int i = 1; i <= sum; i++)
    {
        subset[0][i] = false;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (j < a[i - 1])
            {
                subset[i][j] = subset[i][j];
            }

            if(j>=subset[i-1])
            {
                subset[i][j] = subset[i-1][j] || subset[i-1][j-a[i-1]];
            }
        }
    }

    return subset[n][sum];
}
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum;
    cin >> sum;
    if (isSubset(a, n, sum) == true)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
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