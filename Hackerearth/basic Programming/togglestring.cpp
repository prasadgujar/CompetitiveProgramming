

#include <iostream>

using namespace std;

int main() {
	string s;
	cin>>s;
	int n  = s.length();
	for(int i=0;i<n;i++)
	{
	    if(isupper(s[i]))
	    {
	        s[i] = tolower(s[i]);
	    }
	    else
	    {
	        s[i] = toupper(s[i]);
	    }
	}
	cout<<s;
}

