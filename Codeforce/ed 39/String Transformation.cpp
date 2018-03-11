#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	char c='a';
	int n = s.length();
	for(int i=0;i<n;i++)
	{
		if(s[i]<=c)
		{
			s[i]=c;
			c++;
		}
		if(c>'z')
		{
			cout<<s;
			return 0;
			break;
			
		}
	}

	  cout<<-1;
	
	return 0;
}