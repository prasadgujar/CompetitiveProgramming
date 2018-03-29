#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string a;
    string b;
    cin>>a;
    cin>>b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ok = false;
    int n  = a.length();
    int m  = b.length();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i]==s[j])
            {
                ok = true;
                break;
            }
        }
    }
    if(ok)
    {
        cout<<"Yes"<<'\n';
    }
    else
    {
        cout<<"No"<<'\n';
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}