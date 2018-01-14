#include<bits/stdc++.h>
using namespace std;
int n,a[100],b[100],x,i,j;

void print(int ii,int jj)
{
	cout<<a[ii]<<" "<<b[ii]<<'\n';
}

int main()
{
	cin>>n>>x;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];

	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];

	}
	i=0;
	j=n-1;
	while(i<n)
	{
		while(a[i]+a[j]>x&&j>0)
			j--;
		if(a[i]+b[i]==x)
			print(i,j);
	i++;
	}
		return 0;
}
//Given two array of size of n a[n]&b[n]. find no of pairs of (i,j) such that sum is equal to x.
/*
5 6
1 2 3 4 5
1 2 3 4 5
-->
3 3
*/
