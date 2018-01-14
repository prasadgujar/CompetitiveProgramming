#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int res=a[0];
    for(int i=0;i<n;i++)
        res = res ^ a[i];
    cout<<res<<'\n';
}
int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    solve(a,n);
}
