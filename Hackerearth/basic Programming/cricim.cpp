#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int currmax = a[0];
    int maxend = a[0];
    for(int i=1;i<n;i++)
    {
        currmax = max(a[i],currmax+a[i]);
        maxend = max(maxend,currmax);
      
    }

    cout<<currmax<<'\n';
}
int main() {
    int t;
    //cin>>t;
    t =  1;
    while(t--)
    {
        solve();
    }
	
	return 0;
}