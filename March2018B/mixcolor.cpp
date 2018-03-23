#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        set<int> s;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            s.insert(x);

        }
        if(s.size()==n)
        {
            cout<<0<<'\n';
        }
        else
        {
            cout<<abs(n-s.size())<<'\n';
        }
    }
}