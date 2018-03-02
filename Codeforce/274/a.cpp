#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s ="qwertyuiopasdfghjkl;zxcvbnm,./",ss;
	char c[2];
	gets(c);
	getline(cin,ss);
	int n = ss.size();
	int m = s.size();
 if(c[0]=='R')
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(ss[i]==s[j])
                    cout<<s[j-1];
            }
        }
    }
    else
	{
			for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(ss[i]==s[j])
				{
					cout<<s[j+1];
				}
			}
		}
	}
	return 0;
}
