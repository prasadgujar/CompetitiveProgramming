#include<bits/stdc++.h>
using namespace std;
int n,a[100],b[100],x,i,j;

void print(int ii,int jj)
{
	cout<<a[ii]<<" "<<a[jj]<<'\n';
}

int main()
{
	cin>>n>>x;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];

	}
	
	i=0;
	j=n-1;
	while(i<j)
	{
	
		if(a[i]+a[j]==x)
		{
			print(i,j);
			break;
		}	
		else if(a[i]+a[j]>x)
			j--;
		else
			i++;


	
	}
		return 0;
}
//Given array of size of n a[n]. find no of pairs of (i,j) such that sum is equal to x.
/*
5 4
1 2 3 4 5
-->
1 3
*/
