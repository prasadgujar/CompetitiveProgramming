#include <bits/stdc++.h>
using namespace std;

bool  isvowel(char c)
{
	return (c=='a' or c=='e' or c=='i' or c=='o' or c=='u');
}



void solve()
{
	string s;
	cin>>s;
   std::sort(s.begin(), s.end());
    set<string> ss;
    do {
        //std::cout << s << '\n';
        ss.insert(s);
    } while(std::next_permutation(s.begin(), s.end()));
    
    for(auto &x:ss)
    {
        cout<<x<<" ";
    }
    cout<<endl;
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