#include<bits/stdc++.h>
using namespace std;
int n,c,a[100001];

bool ispossiable(int dist)
{
	int i,placed=1,  lastFound=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]-lastFound>=dist)
		{
			lastFound=a[i];
			placed++;
			if(placed==c)
				return true;
		}
	}
	return false;
}
int binarsearch()
{
	int mid;
	int start=0,end=a[n-1]-a[0];
	while(start<end)
	{
		mid=(start+end)/2;
		if(ispossiable(mid))
		{
			start=mid+1;
		
		}
		else
		{
			end=mid;
		}
	}
	return start-1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&c);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		printf("%d\n",binarsearch());
	}
	return 0;
}