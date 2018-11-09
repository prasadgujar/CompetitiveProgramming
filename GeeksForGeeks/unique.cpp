#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
	   int cn  = 0;
	   string s = to_string(i);
	   int l = s.length();
	   set<char> ss;
	   for(int j=0;j<l;j++)
	   {
	       ss.insert(s[j]);
	   }
	   if(ss.size()==l)
	   {
	       cout<<i<<" ";
	   }
	}
	cout<<endl;

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