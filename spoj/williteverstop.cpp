#include<bits/stdc++.h>
using namespace std;

int main()
{
long long int t;
scanf("%lld",&t);
if((t&(t-1))==0)
    printf("TAK\n");
else
    printf("NIE\n");
return 0;
}
