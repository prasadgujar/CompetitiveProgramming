#include <bits/stdc++.h>
using namespace std;
void solve()
{

    string s;
    cin>>s;
    string ss;
    //ss = s;
    cin>>ss;
    sort(s.begin(),s.end());
    sort(ss.begin(),ss.end());
    if(s==ss)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<'\n';
    }
}
int main() {
	//code 
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}