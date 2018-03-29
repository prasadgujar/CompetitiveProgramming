#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int n;
        cin >> s >> n;
        int cn = 0;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (isdigit(s[i]))
            {
                cn++;
            }
        }
        cout << cn<<'\n';
    }
    
}