#include<bits/stdc++.h>
using namespace std;

int main()
{
    set <string> s;
    string ss;
    cin>>ss;
    for(int i=0;i<ss.length();i++)
    {
        for(char c='a';c<='z';c++)
        {
            s.insert(s.substring(0,i));
            s.insert(c);
            s.insert(s.substring(i));
        }
    }
    cout<<s.size();
}