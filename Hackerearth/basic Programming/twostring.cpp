#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string a;
    string b;
    cin>>a>>b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
    }
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
}

