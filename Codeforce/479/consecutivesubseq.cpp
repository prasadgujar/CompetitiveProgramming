#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<int, int> dp;

    int ok = 0;
    int last = 0;

    for (int i = 0; i < n; i++)
    {
        int x = v[i];
        dp[x] = dp[x - 1] + 1;
        if (ok < dp[x])
        {
            ok = dp[x];
            last = x;
        }
    }

    vector<int> rip;

    for (int i = n - 1; i >= 0; --i)
    {
        if (v[i] == last)
        {
            rip.push_back(i);
            --last;
        }
    }

    reverse(rip.begin(), rip.end());

    cout << ok << '\n';

    for (auto it : rip)
    {
        cout << it + 1 << " ";
    }
}