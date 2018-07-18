#include <iostream>
using namespace std;

void solve()
{
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	long int cnt = 0;
	for(int i=0;i<=a;i++)
	{
		for(int j=0;j<=b;j++)
		{
			if((n-i-j)>=0)
			{
				if(c<=(n-i-j))
				{
					cnt +=c+1;
				}
				else
				{
					cnt+=(n-i-j+1);
				}
			}
		}
	}
	
	cout<<cnt<<"\n";
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