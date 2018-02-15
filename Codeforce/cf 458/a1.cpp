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
        int  y=sqrt(x);
        if(x!=y*y)
        {
            ans =  max (ans,x);
        }
    }
    cout<<ans;
}
