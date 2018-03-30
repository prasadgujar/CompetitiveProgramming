#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        
    }

    sort(a,a+n);
    sort(b,b+n);
    int suma  = a[n-1];
    int sumb  = b[n-1];

    if(suma==sumb)
    {
        cout<<"Tie"<<'\n';
    }
    else if(suma<sumb)
    {
        cout<<"Alice"<<'\n';
    }
    else if(sumb<suma)
    {
        cout<<"Bob"<<'\n';
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