#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long int x;
    cin>>x;
    cout<<__builtin_popcountl(x)<<'\n';
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