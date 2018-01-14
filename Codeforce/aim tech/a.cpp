#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int k,i;
	string s;
    cin>>s>>k;
	set<char> ss;
	for(i=-0;i<s.size();i++)
		ss.insert(s[i]);
    if(k>s.size())
    cout<<"impossible";
    else
    {
    int t=k-ss.size();
    cout<<max(0,t);
    }
	return 0;
}