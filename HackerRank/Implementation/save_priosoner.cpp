#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int n,m,s;
    cin>>n>>m>>s;
    /*if(s+m<=n)
    {
        cout<<s+m-<<'\n';
    }
    else
    {*/
        cout<<(s+m-2)%n+1<<'\n';
        
   // }
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
