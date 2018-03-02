#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int x[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }
    double ok = 0;
    for (int i = 1; i <= m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        ok = max(ok, 1.0 * (x[a] + x[b]) / c);
        //cout << setprecision(16) << ans << '\n';
    }
    cout << setprecision(15) << ok << '\n';
    //printf("%.15lf\n",ok);

    return 0;
}