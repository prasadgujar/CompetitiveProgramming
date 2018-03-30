#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    //long int sum = a[0]+a[n-1];
    //cout<<sum<<'\n';
    bool ok = true;
    int found  = 0;
    for(int i=1;i<=n;i++)
    {
        if(abs(a[i]-a[i-1])>1)
        {
            
            ok = false;
            break;
        }
        else
        {
            found++;
            
        }
        
    }
    if(found==n-1)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<"\n";
    }
}
int main() {
    int t;
//    cin>>t;
t=1;
    while(t--)
    {
        solve();
    }
	
	return 0;
}