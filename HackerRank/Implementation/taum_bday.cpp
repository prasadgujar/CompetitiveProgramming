#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long int
void solve()
{
    ll black;
    ll white;
    cin>>black>>white;
    ll x_unit,y_unit,z_unit;
    cin>>x_unit>>y_unit>>z_unit;
    ll x = min (x_unit,y_unit+z_unit);
    ll y = min (y_unit,x_unit+z_unit);
    //cout<<x;
    ll total = x*black + y*white;
    cout<<total<<'\n';
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
