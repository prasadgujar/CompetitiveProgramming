
#include <iostream>

using namespace std;

int main() {
	string s;
	cin>>s;
	if(s[2]=='A' or s[2]=='E' or s[2]=='I' or s[2]=='O' or s[2]=='U' or s[2]=='Y')
	{
	    cout<<"invalid";
	    return 0;
	}
	if((s[0]-'0'+s[1]-'0')%2==1)
	{
	    cout<<"invalid";
	    return 0;
	}
	else if((s[3]-'0'+s[4]-'0')%2==1)
	{
	    cout<<"invalid";
	    return 0;
	}
	else if((s[5]-'0'+s[4]-'0')%2==1)
	{
	    cout<<"invalid";
	    return 0;
	}
	else if((s[7]-'0'+s[8]-'0')%2==1)
	{
	    cout<<"invalid";
	    return 0;
	}
	cout<<"valid";
}

