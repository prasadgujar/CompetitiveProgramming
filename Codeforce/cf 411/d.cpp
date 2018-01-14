#include <iostream>
using namespace std;
int mod=1000000007;
int main() {
	// your code goes here
	string s;
	int cn=0;
	cin>>s;
	int n=s.length();
	int ok=0;
	for(int i=n-1;i>=0;i--)
	{
		if(s[i]=='b')
		{
			cn++;
		}
		else
		{
			ok +=cn;
			cn*=2;
			ok%=mod;
			cn%=mod;
			
		}
		
	}
	cout<<ok;
	return 0;
}