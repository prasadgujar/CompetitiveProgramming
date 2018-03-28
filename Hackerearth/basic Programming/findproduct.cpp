#include<iostream>
using namespace std;

int main()
{
    int i,n,x;
    const unsigned int mod = 1000000007;
    scanf("%d",&n);
    long long int ans=1;
    //cin>>ans;
    for(i=0;i<n;i++)
    {
        cin>>x;
        ans=(ans*x)%mod;
    }
    //printf("%d",ans%mod);
    cout<<ans;
}