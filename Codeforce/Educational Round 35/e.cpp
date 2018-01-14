#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	stack<int> s;
	int s_last=1;
	s.push(n+1);
	for(int i=0;i<k;i++)
	{
		cin>>a[i];
		if(s.top()<a[i])
		{
			cout<<"-1"<<'\n';
			return 0;
		}
		s.push(a[i]);
		while(s.top()==s_last)
		{
			s.pop();
			s_last++;

		}

	}
             	for(int i=0;i<k;i++)
		{
			cout<<a[i]<<" ";
		}
		while(s.size())
		{
			for(int i=s.top()-1;i>=s_last;i--)
			{
				cout<<i<<" ";
			}
			s_last=s.top()+1;
			s.pop();
		}
		return 0;
}