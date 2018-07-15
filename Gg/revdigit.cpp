#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    int ss = stoi(s);
    cout<<ss<<endl;
	
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