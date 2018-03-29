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
    int counta[26]={0};
    int countb[26]={0};
    for(int i=0;i<n;i++)
    {
        counta[a[i]-'a']++;
    
    }
     for(int i=0;i<m;i++)
    {
        countb[b[i]-'a']++;
    
    }
    for(int i=0;i<26;i++)
    {
        if(counta[i]>0&&countb[i])
        {
            ok = true;
            break;
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