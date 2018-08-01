#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n,k;
	cin>>n>>k;
	long int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	long int ok  = 0;
	int cnt ;
	int res;
	long int total;
	for(int i=0;i<n;i++)
	{
		/*cnt  = a[i];
		res = a[i]*cnt;
		//cout<<res<<i<<" ";
		if(res>k)
		{
			while(res>k)
			{
				cnt--;
				res =  a[i]*cnt;
			}
			
		}
		else if(res<k)
		{
			//cout<<"ok";
				
			while(res<k)
			{
				
				if(res>k)
				{
					break;
				}
				else
				{
				cnt++;
				res =  a[i]*cnt;
				}
			}
			
		}
			if(res>k)
		{
			while(res>k)
			{
				cnt--;
				res =  a[i]*cnt;
			}
			
		}	
		//cout<<"okook"<<cnt<<" ";*/
		total = b[i]*(k/a[i]);
		ok = max(total,ok);
	}
	
	cout<<ok<<"\n";
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
};
