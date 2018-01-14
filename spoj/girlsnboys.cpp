#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y;
	while(true)
	{
		cin>>x>>y;
		if(x==-1&&y==-1)
		{
			break;
		}
		else
		{
			int res;
			
			if(x>y)
			{
				res=ceil((double)x/(y+1));
				cout<<res<<'\n';
			}
			else
			{
				res=ceil((double)y/(x+1));
				cout<<res<<'\n';
			}
		}
	}
	return 0;
}