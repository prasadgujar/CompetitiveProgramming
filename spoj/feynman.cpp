#include<bits/stdc++.h>
using namespace std;
long long int ok;
/*int solve(long long int)
{
ok = t)
}*/
int main()
{
long long int t;
scanf("%lld",&t);
while(t)
{
//solve(t);
//ok = (t*(t+1)*(2*t+1)/6);
printf("%lld\n",(t*(t+1)*(2*t+1)/6));
scanf("%lld",&t);
}
return 0;
}
