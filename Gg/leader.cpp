#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		bool ok = true;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<=a[j])
			{
				ok = false;
				break;
			}
		}
		if(ok==true)
		{
			v.push_back(a[i]);
		}
	}
	
	//v.push_back(a[n-1]);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
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