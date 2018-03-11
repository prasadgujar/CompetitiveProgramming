#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    if(m==1 or n%2==0)
    {
        cout<<2<<'\n';
    }
    else
    {
        cout<<1<<endl;
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
