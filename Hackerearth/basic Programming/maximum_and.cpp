#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll x,y;
    cin>>x>>y;
    ll ok ;
    if(y%2==0)
    {
        ok = y - 2;
        
    }
    else
    {
        ok = y - 1;
    }
    if(ok>=x)
    {
        cout<<ok<<'\n';
    }
    else
    {
        ll res;
        res = x&y;
        cout<<res<<'\n';
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}