#include<bits/stdc++.h>
using namespace std;
#define mod 1000007
typedef long long int ll;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {

        ll n;
        scanf("%lld",&n);
        ll total;
        total=(n*(3*n+1))/2;
        printf("%lld\n",total%mod);
    }
return 0;
}
