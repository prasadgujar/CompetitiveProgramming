#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y,a,b;
	x=0,y=0,a=0,b=0;
	int n;
	cin>>n;
	string s;
	cin>>s;


	for(int i=0;i<n;i++)
	{
		if(s[i]=='R')
		x++;
		if(s[i]=='L')
		y++;
		if(s[i]=='D')
		a++;
		if(s[i]=='U')
		b++;
	}




	cout<<(min(a,b)*2+min(x,y)*2)<<'\n';

	return 0;
}