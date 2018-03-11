#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int dp[201];
    dp[0]=0;
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 1;
    dp[5] = 1;
    for(int i=6;i<=103;i++)
    {
        if(!dp[i-2] or !dp[i-3] or !dp[i-5])
        {
            dp[i] = 1;
        }
        else
        {
            dp[i] = 0;
        }
    }
    if(dp[n])
    {
        cout<<"First"<<endl;
    }
    else
    {
        cout<<"Second"<<endl;
    }
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
