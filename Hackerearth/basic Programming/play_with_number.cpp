#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,q;
    cin>>n>>q;
    long int a[n];
    int x;
    a[0] = 0;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        a[i] = a[i-1]+x;
    }
    for(int i=1;i<=q;i++)
    {
        int l,r;
        cin>>l>>r;
        int sum = floor((a[r]-a[l-1])/((r-l)+1));
        cout<<sum<<'\n';
    }
}
