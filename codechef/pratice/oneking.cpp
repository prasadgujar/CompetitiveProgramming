#include <bits/stdc++.h>
using namespace std;
void solve()
{
	vector<pair<int,int>> vp;
	int n;
	cin>>n;
	int a,b;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		vp.push_back(make_pair(b,a));
	}
	sort(vp.begin(),vp.end());
	int res = 1;
	int last = 0;
	for(int i=1;i<n;i++)
	{
		if(vp[i].second>vp[last].first)
		{
			res++;
			last = i;
		}
	}
	
	cout<<res<<"\n";
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