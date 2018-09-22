#include <bits/stdc++.h>
using namespace std;

void solve(int a[],int n)
{
	priority_queue<int> pq;
	for(int i=0;i<n;i++)
	{
		pq.push(a[i]);
	}
	if(n==1)
	{
		cout<<a[0]<<"\n";
	}
	else if(n==2)
	{
		if(a[0]==a[1])
		{
			cout<<0<<"\n";
		}
		else
		{
			cout<<abs(a[0]-a[1])<<"\n";
		}
	}
	else 
	{
		
		bool ok = false;
		while(ok==false)
		{
			
			int a=pq.top();
			pq.pop();
			int b = pq.top();
			pq.pop();
			//cout<<a<<" "<<b;
			if(a!=b)
			{
				pq.push(abs(a-b));
			}
			if(pq.size()==0)
			{
				cout<<0<<"\n";
				ok = true;
				
			}
			else if(pq.size()==1)
			{
				cout<<pq.top()<<"\n";
				pq.empty();
				ok =  true;
			}
		}
	}

}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	solve(a,n);
	return 0;
}