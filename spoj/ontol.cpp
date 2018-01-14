#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n,i,x,res=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
       {
           scanf("%lld",&x);
           res = res ^ x;

       }

    printf("%lld",res);

    return 0;
}
