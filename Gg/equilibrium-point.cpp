#include <iostream>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int a[n];
	int sum  = 0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum +=a[i];
	}
	bool ok =  false;
	int pref = a[0];
	int res = -1;
	for(int i=1;i<n;i++)
	{
		int check  = sum -pref;
		check -=a[i];
		if(check==pref)
		{
			res = i+1;
			bool ok  = true;
			break;
		}
		else
		{
			pref +=a[i];
		}
		
	}
	if (n==1)
	{
		cout<<n<<"\n";
	}
	else if(ok==true)
	{
		cout<<res<<"\n";
	}
	else
	{
		cout<<res<<"\n";
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