#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n = s.length();
    int dx=0;
    int dy=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='L')
        {
            dx +=-1;
        }
        else if(s[i]=='R')
        {
            dx +=1;
        }
        else if(s[i]=='D')
        {
            dy +=-1;
        }
        else 
        {
            dy +=1;
        }
    }

    cout<<dx<<" "<<dy;

}
int main() {
    int t;
    //cin>>t;
    t = 1;
    while(t--)
    {
        solve();
    }
	
	return 0;
}