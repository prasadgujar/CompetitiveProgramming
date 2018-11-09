#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		a[i] = a[i]*a[i];
	}
	bool ok = false;
	sort(a,a+n);
	for(int i=n-1;i>=2;i--) 
	{
		int l = 0;
		int r = i-1;
		while(l<r)
		{
		if(a[l]+a[r]==a[i])
		{
			ok = true;
			break;
		}
		else
		{
			if(a[l]+a[r]<a[i])
			{
				l++;
			}
			else
			{
				r--;
			}
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