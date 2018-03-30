#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int sum;
    int n;
    cin>>sum>>n;
    int x;
    int cn=0;
    int ok = 0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            sum = sum - 1;
        }
        if(a[i]==1)
        {
            sum +=3;
            sum -=1;
        }
        if(sum==0&&i<(n-1))
        { 
            cout<<"No"<<" "<<i+1<<'\n';
            ok = 1;
            break;
        }
    }
    if(ok==0)
    {
        cout<<"Yes"<<" "<<sum<<'\n';
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