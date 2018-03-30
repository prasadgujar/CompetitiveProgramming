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
        cin >> n;
        cin>>s;
        int cn = 0;
        //int n = s.length();
        //char c [] = s;
        bool ok = true;

        for (int i = 0; i < n;i++)
        {
           if(isdigit(s[i]))
           {
              while(i<n&&isdigit(s[i]))
              {
                  i++;
              }
              cn++;

           }
           
        }
        cout << cn<<'\n';
    }
    
}