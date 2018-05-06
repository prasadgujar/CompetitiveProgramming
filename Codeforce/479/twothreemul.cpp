#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int count3()
{
    int ret = 0;
    while(x%3==0)
    {
        ret++;
        x /=3;
    }

    return ret;
}
int main()
{
 int n;
 cin>>n;
 vector<pair<int,ll>> v;
 v.resize(n);
 for(int i=0;i<n;i++)
 {
     cin>>v[i].second;
     v[i].first = count3(v[i].second);
 }

sort(v.begin(),v.end());
for(int i=0;i<n;i++)
{
    printf("%lld%c",v[i].second,"\n"[i+1 == n]);
}
}