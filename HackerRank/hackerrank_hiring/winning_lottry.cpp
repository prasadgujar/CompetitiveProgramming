//Editorial Solution
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n;
int cnt[1<<10];
void read()
{
     cin>>n;
    string s;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        int mask = 0;
        for(int j=0;j<s.size();j++) mask |= (1 << (s[j]-'0')); //cout<<mask<<" "<<'\n';
         ++cnt[mask]; //cout<<cnt[mask]<<endl;
        
    }
    
}

long long  solve()
{
    long long ans = 0;
    for(int m1=0;m1<=1023;m1++)

        for(int m2=0;m2<=1023;m2++)
        
            if((m1|m2) == 1023)
            {
                //cout<<m1<<" "<<m2<<'\n';
                ans +=m1 ==  m2 ?  1LL * cnt[m1] * (cnt[m1]-1) : 1LL * cnt[m1] * cnt[m2];
            }
     return ans / 2LL;                                                                                 
      
     
}

void out(long long s)
{
    cout<< s << endl;
    
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   
  read();
  out(solve());   
    /*int a=1022;
    int b = 522;
    if((a|b)==1023)
    cout<<"yoyoyo";*/
    return 0;
}
