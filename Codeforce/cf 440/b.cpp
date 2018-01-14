#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,k,kk;
	cin>>n>>k;
	int  a[n];
	int ok;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		
	ok=a[0];
	if(k==1)  // find minimum from the set
	{
		for(int i=0;i<n;i++)
		{
			ok=min(ok,a[i]);
		}
		cout<<ok;
	} 
    else if(k==2) // only 2 partition, the maxium between first and last element
    { 
    	kk=max(a[0],a[n-1]);
    	cout<<kk;
    
    }
    else  // if greater than or equal 3 than find maximum 
    {
    	
    	for(int i=0;i<n;i++)
    	{
    		ok=max(ok,a[i]);
    	}
    	cout<<ok;
    }
	return 0;
}