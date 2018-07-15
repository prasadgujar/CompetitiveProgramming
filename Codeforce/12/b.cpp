#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	string m;
	cin>>s;
	cin>>m;
	string sss = s;
	int l1,l3;
	l1 = s.length();
	l3 = m.length();
	if( l1==l3 && l1==1)
	{
	   if(s[0]==m[0])
	   {
	   	cout<<"OK";
	   	return 0;
	   }
	}
	sort(s.begin(),s.end());
 	int cn = 0;
 	int n  = s.length();
	for(int i=0;i<n;i++)
	{
		if(s[i]=='0')
		{
			cn++;
		} 
	}
	//cout<<m[0];
	
if(n==cn or m[0]=='0')
{
cout<<"WRONG_ANSWER";
return 0;
}
	string ss = s;
	swap(ss[0],ss[cn]);
	//cout<<cn;
	//cout<<s<<endl;
	//cout<<ss;
	//long l1 = std::stol(m);
	long l2 = std::stol(ss);
	//cout<<m<<" "<<l2<<endl;
	long int mm  = stol(m);
            
	if(mm==l2)
	{
		cout<<"OK";
	}
	else
	{
		cout<<"WRONG_ANSWER";
	}
	return 0;
}