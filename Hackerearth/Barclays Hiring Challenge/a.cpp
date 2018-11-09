#include <iostream>
using namespace std;

int main() {
	int n,q;
	cin>>n>>q;
	 long int a[n];
	 long int v[n];
	v[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]&(a[i]>>1)!=0)
		{
		   v[i]=1;
		   v[i] +=v[i-1];
			
		}
		else
		{
			v[i]=0;
			v[i]+=v[i-1];
			
		}
	}
	for(int i=1;i<=q;i++)
	{
		int l,r;
		cin>>l>>r;
		cout<<v[r]-v[l-1]<<"\n";
	}
	return 0;
}