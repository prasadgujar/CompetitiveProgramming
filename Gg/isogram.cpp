#include <bits/stdc++.h>
using namespace std;

void solve()
{
  string s;
  cin>>s;
  int n = s.length();
  set<char> ss;
  for(int i=0;i<n;i++)
  {
      ss.insert(s[i]);
  }
  if(ss.size()==n)
  {
      cout<<1<<endl;
  }
  else
  {
      cout<<0<<endl;
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