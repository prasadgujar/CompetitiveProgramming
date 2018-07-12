#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	map<int,int> mp;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		mp[v[i]]++;
	}
	int res = 0;
	for(int i=0;i<n;i++)
	{
		bool  ok =  false;
		for(int j=0;j<31;j++)
		{
			int x = (1 << j) - v[i];
			if(mp.count(x) && (mp[x]>1 or (mp[x]==1 && x!=v[i])))
			{
			   ok = true;
			}
		}
		if(!ok)
		{
			res++;
		}
	}
	cout<<res;
	return 0;
}