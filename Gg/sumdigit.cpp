#include <iostream>
using namespace std;


int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	string  s;
	cin>>s;
	int ok = 0;
	int n = s.length();
	for(int i=0;i<n;i++)
	{
	    ok +=s[i]-'0';
	}
	cout<<ok<<"\n";
	}
	return 0;
}