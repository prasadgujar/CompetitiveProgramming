#include <iostream>
using namespace std;
#define inf 1000000000
int main() {
	// your code goes here
	int a[11],t,k;
	int ok,csum,res;
	int lim = (1<<11);
	//cout<<lim;
	cin>>t;
	while(t--)
	{
		for(int i=0;i<11;i++)
		{
			cin>>a[i];
		}
		cin>>k;
		ok = -inf;
		res = 0;
		for(int m=0;m<lim;m++)
		{
			if(__builtin_popcount(m)==k)
			{
				//cout<<__builtin_popcount(m)<<" ";
			csum = 0;
			for(int j=0;j<11;j++)
			{
				if(m&(1<<j))
				{
					
					csum +=a[j];
				}
				
			}
			
			if(csum>ok)
			{
				ok  = csum;
				res = 1;
			}
			else if(csum==ok)
			{
				res++;
			}
			}
		}
		cout<<res<<"\n";
	}
	
	
	return 0;
}