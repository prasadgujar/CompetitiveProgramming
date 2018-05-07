#include <bits/stdc++.h>
using namespace std;

int main()
{
    double l, d, v1, v2;
    cin >> d >> l >> v1 >> v2;
    double ok = (l - d) / (v1 + v2);
    cout << setprecision(20) << ok;

    return 0;
}