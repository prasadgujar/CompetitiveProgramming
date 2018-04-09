#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n = s.length();
    int q;
    cin>>q;
    int ind;
    char c;
    string str;
    str =  s;
    while(q--)
    {
        cin>>ind>>c;
        ind--;
        str[ind] = c;
    }
    cout<<str;
    int m;
    cin>>m;
    int a,b;
    string fin;
    fin = str;
    while(m--)
    {
        cin>>a>>b;
        a--;
        b--;
        reverse (fin.substring(a,b));

    }
    cout<<fin;
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