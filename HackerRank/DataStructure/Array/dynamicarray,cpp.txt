#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef vector<int> vi;
int main() {
	// your code goes here 
	int n,q;
	cin>>n>>q;
	int lastans = 0;
	vector<vi> v(n);
	for(int i=0;i<q;i++)
	{
		int t,x,y;
		cin>>t>>x>>y;
		int ok = (x^lastans)%n;
		if(t==1)
		{
			v[ok].pb(y);
		}
		else
		{
			lastans = v[ok][y % v[ok].size()];
			cout<<lastans<<"\n";
		}
	}
	return 0; 
}