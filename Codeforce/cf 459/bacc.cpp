#include<bits/stdc++.h>
using namespace std;

map<string,string> m1;

int main()
{
    int n,m;
    cin>>n>>m;
    string sname,sip;
    for(int i=0;i<n;i++)
    {
        cin>>sname>>sip;
        sip=sip+';';
        m1[sip]=sname;
    }
    for(int i=0;i<m;i++)
    {
        cin>>sname>>sip;
        cout<<sname<<" "<<sip<<" #"<<m1[sip]<<'\n';
    }
    return 0;
}
