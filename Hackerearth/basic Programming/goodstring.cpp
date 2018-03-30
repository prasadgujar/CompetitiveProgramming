#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    set<char> c;
    cin>>s;
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        c.insert(s[i]);
    }
    cout<<n-c.size()<<'\n';
}
int main() {
    int t;
    //cin>>t;
    t = 1;
    while(t--)
    {
        solve();
    }
	
	return 0;
}