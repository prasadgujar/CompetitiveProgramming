
 #include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,ok=0,x,y,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		if(x<=ok&&y>=ok)
		{
			ok=y;
		}
	}
	if(m<=ok)
	{
		cout<<"YES"<<'\n';
	}
	else
	{
		cout<<"NO"<<'\n';
	}
	return 0;
}