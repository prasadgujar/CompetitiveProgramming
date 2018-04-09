#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n  = s.length();
   
    set<char> c;
    for(int i=0;i<n;i++)
    {
        c.insert(s[i]);
    }
    
    if(c.size()%2==1)
    {
        cout<<"Player1"<<'\n';
    }
    else
    {
         cout<<"Player2"<<'\n';
    }
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
	
	return 0;
}