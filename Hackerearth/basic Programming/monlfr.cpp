#include <bits/stdc++.h>
using namespace std;
#define ull long long int
void solve()
{
    ull a,b;
    cin>>a>>b;
    ull c = a^b;
    cout<<__builtin_popcountll(c)<<'\n';;
    
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