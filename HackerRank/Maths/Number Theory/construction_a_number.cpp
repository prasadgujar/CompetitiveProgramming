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
    int x;
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sum +=x;
    }
    if(sum%3==0)
    {
        cout<<"Yes"<<'\n';
    }
    else
    {
        cout<<"No"<<'\n';
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
