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
    n =n%4;
    m =m%4;
    if((n==0) ||  (n==3) || (m==0) or (m==3))
    {
        cout<<"First"<<endl;
        
    }
    else
    {
        cout<<"Second"<<'\n';
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
