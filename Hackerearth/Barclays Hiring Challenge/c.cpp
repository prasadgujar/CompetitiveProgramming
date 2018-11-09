#include <bits/stdc++.h>
using namespace std;
 
 int arr[26]={0};
int main() {
	int n,i;
	string z,s;
	cin >>s;
	n=s.length();
	z="";
	for(i=0;i<n;i++)
	{
	    if(arr[s[i]-97]==0)
	    {
	        z=z+s[i];
	        arr[s[i]-97]=1;
	    }
	}
	vector<string> lex;
	int m = z.length();
	for(int i=0;i<m;i++)
	{
		string ss = s;
		char c = z[i];
		ss.erase(remove(ss.begin(),ss.end(),c),ss.end());
		//cout<<ss<<endl;
		lex.push_back(ss);
	}
	string res = lex[0];
	//cout<<res;
	for(int i=1;i<lex.size();i++)
	{
		if(res>lex[i])
		{
			res=lex[i];
		}
 
	}
	cout<<res<<"\n";
}
 