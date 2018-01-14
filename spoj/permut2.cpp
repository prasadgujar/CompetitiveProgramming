#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	while(n!=0)
	{
		int a[n],b[n];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			b[a[i]]=i;

		}
		bool ok=true;
		for(int i=1;i<=n;i++)
		{
			if(a[i]!=b[i])
				{
					ok=false;
					break;
				}
		}
		if(ok)
			cout<<"ambiguous"<<'\n';
		else
			cout<<"not ambiguous"<<'\n';
		cin>>n;
	}
	return 0;
}