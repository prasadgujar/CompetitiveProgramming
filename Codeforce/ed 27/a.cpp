#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	m = 2*n;
	int a[m];
	for(int i=0;i<m;i++)
	cin>>a[i];
	sort(a,a+m);
	if(a[n]>a[n-1])
	cout<<"YES";
	else
	cout<<"NO";
	
	return 0;

}