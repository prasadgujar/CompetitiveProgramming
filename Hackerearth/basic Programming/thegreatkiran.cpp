

#include <iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	long int a[n];
	long int x=0;
	long int y=0;
	long int z=0;
	
	for(int i=1;i<=n;i++)
	{
	    cin>>a[i];
	}
	for(int i=1;i<=n;i+=3)
	{
	    x+=a[i];
	}
		for(int i=2;i<=n;i+=3)
	{
	    y+=a[i];
	}
		for(int i=3;i<=n;i+=3)
	{
	    z+=a[i];
	}
	cout<<x<<" "<<y<<" "<<z;
	
}

