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
	bool ok = true;
	sort(a,a+n);
	sort(b,b+n);
	for(int i=0;i<n;i++)
	{
	    if(a[i]!=b[i])
	    {
	        ok = false;
	        break;
	    }
	}
	
	if(ok==true)
	{
	    cout<<1;
	}
	else
	{
	    cout<<0;
	}
	cout<<endl;
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