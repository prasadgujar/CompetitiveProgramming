#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,b,c,n,x;
    std::cin>>a>>b>>c;
    std::cin>>n;
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        std::cin>>x;
        if(x>b&&x<c) res++;
    }
    std::cout<<res<<'\n';
    return 0;
}