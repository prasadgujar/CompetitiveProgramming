

#include <iostream>

using namespace std;

int main() {
	int n,q;
	cin>>n>>q;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(int i=1;i<=q;i++)
	{
	    int t;
	    cin>>t;
	    if(t==1)
	    {
	        int x,y;
	        cin>>x>>y;
	        a[x] = y;
	    }
	    else
	    {
	        int l,r;
	        cin>>l>>r;
	        int sum = 0;
	        //l--;
	        //r--;
	        for(int j=l;j<=r;j++)
	        {
	            sum +=a[j];
	        }
	        cout<<sum<<'\n';
	    }
	    
	}
}


