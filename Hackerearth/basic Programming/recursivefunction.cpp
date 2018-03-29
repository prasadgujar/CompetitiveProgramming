#include <bits/stdc++.h>
using namespace std;
int recursive(int x, int y)
{
    if (x == 0)
    {
        // y = y + 1;
        return (y + 1) % 1000;
    }
    if (x > 0 && y == 0)
    {
        return recursive(x - 1, 1) % 1000;
    }
    if (x > 0 && y > 0)
    {
        return recursive(x - 1, recursive(x, y - 1));
    }
}
void solve()
{
    int x, y;
    cin >> x >> y;
    int z = recursive(x, y);
    //cout << z % 1000 << z % 100 << z % 10;
    z = z % 1000;
    if (z < 10)
    {
        cout << "00" << z << '\n';
    }
    else if (z < 100)
    {
        cout << "0" << z << '\n';
    }
    else
    {
        cout << z << '\n';
    }
}
int main()
{
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
}