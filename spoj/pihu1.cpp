#include<bits/stdc++.h>
using namespace std;
int n,c,a[100001],x;


int binarysearch()
{
	int mid;
	int start=0,end=a[n-1]-a[0];
	while(start<end)
	{
		mid=(start+end)/2;
		if(a[start]+a[mid]+a[end]==x)
		{
			return true;
			
		
		}
		else if(a[start]+a[mid]+a[end]<x)
		{
			start=mid+1;
		}
		else 
		{
			end=mid-1;
		}
		
	}
	
	return false;
	
 
}
int main()
{
	int t,x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&c);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		scanf("%d",&x);
		sort(a,a+n);
		if(binarysearch())
		{
			cout<<"YES"<<'\n';
		}
		else
		{
			cout<<"NO"<<'\n';
		}
	
	}
	return 0;
}