#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int> mp;
    //int n = s.length();
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    bool  ok = false;
    for(int i=0;i<n;i++)
    {
        if(mp[s[i]]==1)
        {
            cout<<s[i]<<endl;
            ok = true;
            break;
        }
    }
    if(ok==false)
    {
        cout<<-1<<endl;
    }
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
	