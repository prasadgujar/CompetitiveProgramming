#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cn=0;
    for(int i=0;i<n-2;i++)
    {
        //int diff=a[i]-a[i-1];
        //cout<<diff<<" ";
        for(int j=i+1;j<n-1;j++)
        {
            if(a[j]-a[i]==d)
        {
                for(int k=j+1;k<n;k++)
                {
                    if(a[k]-a[j]==d)
                    {
                        cn++;
                    }
                    //cn++;
                }
             //cn++;
            //cout<<"yo";
        }
        }
        
    }
    cout<<cn;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
