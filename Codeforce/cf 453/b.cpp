#include <iostream>
using namespace std;
int father[20010],color[20010];
int n;
int main() {
	// your code goes here
	
	cin>>n;
	father[1]=1;
	for(int i=2;i<=n;++i)
	{
		cin>>father[i];
	}
	for(int i=1;i<=n;++i)
	{
		cin>>color[i];
	}
	
	int ans=0;
	for(int i=1;i<=n;++i)
	{
		if(color[i]!=color[father[i]])
		{
			++ans;
		}
	}
	
	cout<<ans+1;
	return 0;
}