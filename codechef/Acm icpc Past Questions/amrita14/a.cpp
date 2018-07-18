#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n,p;
	cin>>n>>p; 
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	int cnt = 0;
	for(int i=0;i<n;i++)
	{
		if(v[0]>=p)
		{
			cnt = n;
			break;
		}
		else if(v[i]>=p)
		{
			cnt++;
		}
	}
	cout<<cnt<<"\n";
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