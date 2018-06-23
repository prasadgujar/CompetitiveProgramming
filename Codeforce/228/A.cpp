#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int ok = a[0];
    for(int i=1;i<n;i++)
    {
        ok = __gcd(ok,a[i]);
    }

    cout<<ok*n;
}
