#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	int n=s.length();
	//unique(s.begin(),s.end());
	int cn=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='1'||s[i]=='7'||s[i]=='3'||s[i]=='5'||s[i]=='9')
		{
			
		
			    cn++;
		}
	
	
	
	}


	cout<<cn;
	
}