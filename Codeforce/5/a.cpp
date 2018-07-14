#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	int active = 0;
	int res = 0;
	
	while(getline(cin,s, '\n'))
	{
		if(s[0]=='+')
		{
			active++;
		}
		else if(s[0]=='-')
		{
			active--;
		}
		else
		{ 
			int find = 0;
			int n = s.length();
			for(int i=0;i<n;i++)
			{
				if(s[i]==':')
				{
					find = i;
					break;
				}
			}
			int ok  = n - (find+1);
			res += (active) * ok;
		}
	}
	cout<<res;
	return 0;
}