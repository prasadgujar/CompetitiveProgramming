#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int ok;
	if(k==0)
	{
		ok  = v[0]-1;
	}
	else
	{
		ok = v[k-1];
	}
	int cnt = 0;
	for(int i=0;i<n;i++)
	{
		if(v[i]<=ok)
		{
			cnt++;
		}
	}
	if(cnt!=k || !(1<=ok && ok <=1000* 1000 * 1000))
	{
		cout<<-1;
	}
	else
	{
		cout<<ok;
	}
	return 0;
}