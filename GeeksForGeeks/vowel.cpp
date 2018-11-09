#include <bits/stdc++.h>
using namespace std;

bool  isvowel(char c)
{
	return (c=='a' or c=='e' or c=='i' or c=='o' or c=='u');
}



void solve()
{
	string s;
	cin>>s;
	int n = s.length();
	int i = 0;
	int j = n-1;
	while(i<j)
	{
		if(!isvowel(s[i]))
		{
			i++;
			continue;

		}
		if(!isvowel(s[j]))
		{
			j--;
			continue;

		}
	
		swap(s[i],s[j]);
		i++;
		j--;
		
	}
	cout<<s<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}