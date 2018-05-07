#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    double ok = 0;
    cin >> a >> b;
    char ch;
    cin.get(ch);
    cin >> c;
    ok = (a + b + c);
    ok += (a + b + c);
    cout << fixed << setprecision(6) << ok;

    return 0;
}