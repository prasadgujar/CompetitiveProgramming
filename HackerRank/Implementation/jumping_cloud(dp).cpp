#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int inf = 555;
    int a[111];
    int dp[111];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=2;i<=n;i++)
    {
        if(a[i]==0)
        {
            dp[i] = min(dp[i-1],dp[i-2])+1;
            //cout<<dp[i-1]<<" "<<dp[i-2]<<'\n';
        }
        
        else
        {
           dp[i] = inf;
        }
    }
    
    cout<<dp[n]<<'\n';
     /*for(int i=1;i<=n;i++)
    {
        cout<<dp[i]<<" ";
    }*/
    return 0;
}
