#include <iostream>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<2<<"\n";
		//continue;
	}
	else if((n+1&n)==0)
	{
		cout<<n/2<<"\n";
	}
	else
	{
		cout<<-1<<'\n';
	}
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}