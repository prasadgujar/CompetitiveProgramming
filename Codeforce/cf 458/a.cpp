#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    int x;
    int ans = -1e7;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        bool ok = true;
        for(int j=0;j*j<=x;j++)
        {
            if(j*j==x)
                ok = false;
        }
        if(ok)
             ans =  max ( ans,  x);
    }
    cout<<ans;
}
