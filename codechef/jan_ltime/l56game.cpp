#include <iostream>
using namespace std;
 void solve()
 {
 	int n;
 	cin>>n;
 	int a[n];
 	//int odd = 0;
 	//int even = 0;
 	for(int i=0;i<n;i++)
 	{
 		cin>>a[i];
 		
 	}
 	int odd = 0;
 	int even = 0;
 	for(int i=0;i<n;i++)
       	{if(a[i]%2==0)
 		{
 			even++;
 		}
 		else
 		{
 			odd++;
 		}
       	}
 	if(odd%2==0 || n==1)
 	{
 		cout<<"1\n";
 	}
 	else
 	{
 		cout<<"2\n";
 	}
 }
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		solve();

	}
	return 0;
}