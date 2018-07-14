#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	string s[n];
	map<string,int> mp;
	vector<string> v;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		
		if(mp[s[i]]==0)
		{
			v.push_back("ok");
			
		}
		else
		{
			int ok = mp[s[i]]++;
			string ss = to_string(ok);
			s[i] +=ss;
			v.push_back(s[i]);
		}
		mp[s[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<"\n";
	}

	return 0;
}