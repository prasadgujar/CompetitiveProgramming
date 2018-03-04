// Editorial Solution
#include <bits/stdc++.h>
using namespace std;

const int N = 50001;
const int K = 101;
const long double inf = 1e15;

long double dp[K][N];
int n, k, x[N];
long double s1[N], s2[N];

void precompute() // precomputation
{
    for (int i = 1; i <= n; i++)
    {
        s1[i] += s1[i - 1] + x[i];              // prefix sum
        s2[i] += s2[i - 1] + x[i] * 1.0 * x[i]; // prefix square sum
    }
}

long double getcost(int l, int r) // getting cost of particular range
{
    return s2[r] - s2[l - 1] - ((s1[r] - s1[l - 1]) * (s1[r] - s1[l - 1])) / (r - l + 1.0);
}

//Divide and Conquer Techniuqe l-r
void compute(int i, int L, int R, int optL, int optR)
{
    if (L > R)
        return;
    int mid = (L + R) / 2;
    int best = optL;

    dp[i][mid] = inf;

    for (int k = optL; k <= min(mid - 1, optR); k++)
    {
        long double cur = dp[i - 1][k] + getcost(k + 1, mid);
        if (cur < dp[i][mid])
        {
            dp[i][mid] = cur;
            best = k;
        }
    }

    compute(i, L, mid - 1, optL, best);
    compute(i, mid + 1, R, best, optR);

    return;
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }

    sort(x + 1, x + n + 1);

    precompute();

    // initializ the cost to inf
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            dp[i][j] = inf;
        }
    }

    dp[0][0] = 0.0; // Base Condition

    for (int i = 1; i <= k; i++)
    {
        compute(i, 1, n, 0, n);
    }

    cout << fixed;
    cout << setprecision(15) << dp[k][n] << '\n';

    /* for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout<<dp[i][j]<<" "<<dp[j][i]<<'\n'; 
        }
    }
*/
    return 0;
}