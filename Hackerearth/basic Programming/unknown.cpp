#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]+(i+1)>n)
        {
            cout<<i+1<<'\n';
            break;
        }

    }
    
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
	
	return 0;
}