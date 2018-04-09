#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n = s.length();
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
       if(i==0)
       {
           sum +=s[i]-'0';
       }
       else if(i%2==1&&s[i]=='+')
       {
           sum +=s[i+1]-'0';
       }
       else if(s[i]=='-'&&i%2==1)
       {
           sum -=s[i+1]-'0';
       }
    }
    int maxx = -1;
    maxx = max(maxx,sum);
    cout<<maxx<<'\n';
}
int main() {
    int t;
    cin>>t;
    int maxx = -1;
    while(t--)
    {
        //solve();
          string s;
    cin>>s;
    int n = s.length();
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
       if(i==0)
       {
           sum +=s[i]-'0';
       }
       else if(s[i]=='+')
       {
           sum +=s[i+1]-'0';
       }
       else if(s[i]=='-')
       {
           sum -=s[i+1]-'0';
       }
    }
    //int maxx = -1;
    maxx = max(maxx,sum);
    //cout<<maxx<<'\n';
    }
	cout<<maxx<<'\n';
	return 0;
}