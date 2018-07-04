#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	pair<int,int> p[101];
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>p[i].first;
		p[i].second = i;
		
	}
	sort(p,p+n);
	for(int i=0;i<n;i++)
	{
		if(k<p[i].first)
		{
			break;
		}
		v.push_back(p[i].second+1);
		k -=p[i].first;
	}
	//sort(a,a+n);
	sort(v.begin(),v.end());
	cout<<v.size()<<"\n";
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}