#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    char s[1000];
    stack<char> ss;
    while(t--)
    {
        cin>>s;
        int goo = strlen(s);
        for(int i=0;i<goo;i++)

        {
            if(isalpha(s[i]))
                cout<<s[i];
            else if(s[i]==')')
            {
                cout<<ss.top();
                ss.pop();
            }
            else if(s[i]!='(')
                    ss.push(s[i]);
        }
        cout<<'\n';
    }
    return 0;
}
