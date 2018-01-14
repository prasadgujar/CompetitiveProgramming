#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a.push_back(x);
	}
	int c=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				c++;
			}

		}
	int m;
	cin>>m;
	while(m--)
	{
		int l,r;
		cin>>l>>r;
		c=c+((r-l+1)*(r-l)/2);
		if(abs(c)%2==1)
			cout<<"odd"<<'\n';
		else
			cout<<"even"<<'\n';

	}
return 0;
}