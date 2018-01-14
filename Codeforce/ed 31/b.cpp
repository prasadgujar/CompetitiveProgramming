#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,x;
	cin>>n;
	cin>>x;
	int sum;
	sum=0;
	int a;
	for(int i=1;i<=n;++i)
	{
		cin>>a;
		sum +=a;
	}
	
	sum += n-1;
	if(sum==x)
	{
		cout<<"YES"<<'\n';
	}
	else
	{
		cout<<"NO"<<'\n';
	}
	return 0;
}