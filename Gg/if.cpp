#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    if(x>5)
	    {
	        cout<<"Greater than 5"<<"\n";
	    }
	    else if(x==5)
	    {
	        cout<<"Equal to 5"<<"\n";
	    }
	    else if(x<5)
	    {
	        cout<<"Less than 5"<<"\n";
	    }
	}
	return 0;
}