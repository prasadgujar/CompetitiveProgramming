#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.length();
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            a++;
        }
        else
        {
            b++;
        }

    }
  if(a==0)
  {
      for(int i=0;i<n-1;i++)
      {
          cout<<s[i];
      }
  } 
  else
  {
      bool  ok  = false;
      for(int i=0;i<n;i++)
      {
          if(ok==false && s[i]=='0')
          { 
             ok = true;
          }
          else
          {
              cout<<s[i];
          }
      }
  }

} 
