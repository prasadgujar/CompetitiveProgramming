#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll ok(ll n)
{
    return  (n*(n+1))/2;
}
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int till = 1;
    ll sum = 0;
    for(int i=1;i<n;i++)
    {
        if(s[i]>=s[i-1])
        {
            till++;
        }
        else
        {
            sum +=ok(till);
            till = 1;
        }

    }
    sum +=ok(till);
    cout<<sum<<'\n';
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