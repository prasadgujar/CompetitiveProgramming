#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    bool ok = true;
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==a[i+1][j])
            {
                ok = false;
                break;
            }
        }
    }
    if(ok==true)
    {
        cout<<"Yes"<<"\n";
    }
    else
    {
        cout<<"No"<<"\n";
    }
}
int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}