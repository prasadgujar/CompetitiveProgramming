#include<bits/stdc++.h>
using namespace std;

void solve()
{
long long int x,y;
std::cin>>x>>y;
//vector<long long int> a;
//vector<long long int> b;
int a[x];
int b[y];
for(int i = 0 ; i < x ; i++)
std::cin>>a[i];
for(int i = 0 ; i < y ; i++)
std::cin>>b[i];
std::sort(a,a+x);
std::sort(b,b+y);
if(a[x-1]>=b[y-1])
std::cout<<"Godzilla"<<"\n";
else
std::cout<<"MechaGodzilla"<<"\n";
}
int main()
{
long long int t;
std::cin>>t;
while(t--)
{
solve();
}
return 0;
}
