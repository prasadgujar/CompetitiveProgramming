#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes 
	string a,b;
	cin>>a;
	cin>>b;
	int n,m;
	n =a.length();
	m = b.length();
	if(a[n-1]!=b[m-1])
	{
		cout<<n+m;
		return 0;
	}
	int res = 0;
	int ok  = max(n,m);
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	for(int i=0;i<ok;i++)
	{
		if(a[i]==b[i])
		{
			res++;
		}
		else
		{
			break;
		}
	}
	int z = n + m;
	cout<<z-res*2;
	return 0;
}