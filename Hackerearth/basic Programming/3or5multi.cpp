#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin>>n;
    n = n - 1;
    ll a = n/3;
    ll b = n/5;
    ll c = n/15;

    ll ok ;
    ok = 3*a*(a+1)/2+5*b*(b+1)/2-15*c*(c+1)/2;
    cout<<ok<<'\n';
    
    
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
	
	return 0;
}