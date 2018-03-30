#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,sum;
    cin>>n>>sum;
    long long int a[n],x;
    bool ok = true;
    for(long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int csum = 0;

    for(long int i=0;i<n;i++)
    {
        csum  = a[i];
        for(long int j=i+1;j<=n;j++)
        {
            if(csum == sum)
            {
                //cout<<"Yes"<<'\n';
                ok = false;
                break;
            }
            if(csum > sum || j==n)
            {
                break;
            }
            csum  +=a[j];
        }
    }
    if(ok)
    {
        cout<<"NO"<<'\n';
    }
    else
    {
        cout<<"YES"<<'\n';
    }
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