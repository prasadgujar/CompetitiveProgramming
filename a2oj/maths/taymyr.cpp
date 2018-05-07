#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, z;
    cin >> n >> m >> z;
    int cnt = 0;
    vector<int> a;
    vector<int> b;
    for (int i = 1; i <= z; i++)
    {
        int x = n * i;
        int y = m * i;
        a.push_back(x);
        b.push_back(y);
        //cout<<x<<" ";
        //cout<<endl;
        //cout<<y<<" ";
        if (x == y)
        {
            cnt++;
        }
        x = 0;
        y = 0;
    }

    for (int i = 0; i < a.size(); i++)
    {

        //cout<<a[i]<<" "<<b[i];
        if (a[i] == b[i])
        {
            //	cnt++;
        }
    }
    //cout<<endl;
    int res;
    int xx = __gcd(n, m);
    int yy = n * m / xx;
    res = z / yy;
    cout << res;
    return 0;
}