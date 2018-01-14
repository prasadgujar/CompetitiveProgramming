#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	string s;
	cin>>s;
	int l,r;
	char c1,c2;

	while(m--)
	{
		cin>>l>>r>>c1>>c2;
		for(int i=l-1;i<r;i++)
		{
			if(s[i]==c1)
			{
				s[i]=c2;
			}
		}
	}
	cout<<s;
	return 0;
}