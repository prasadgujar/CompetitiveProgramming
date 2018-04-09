#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    string ss;
    ss = s;
    reverse(ss.begin(),ss.end());
    if(s==ss)
    {
        cout<<"Palindrome"<<'\n';
    }
    else
    {
        int n = s.length();
       long long int sum = 0;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                 if(s[i]=='a')
                {
                    sum +=1;
                }
                if(s[i]=='b')
                {
                    sum +=2;
                }
                if(s[i]=='c')
                {
                    sum +=3;
                }
                if(s[i]=='d')
                {
                    sum +=4;
                }
                if(s[i]=='e')
                {
                    sum +=5;
                }
                if(s[i]=='f')
                {
                    sum +=6;
                }
                if(s[i]=='g')
                {
                    sum +=7;
                }
                if(s[i]=='h')
                {
                    sum +=8;
                }
                if(s[i]=='i')
                {
                    sum +=9;
                }
                if(s[i]=='j')
                {
                    sum +=10;
                }
                if(s[i]=='k')
                {
                    sum +=11;
                }
                if(s[i]=='l')
                {
                    sum +=12;
                }
                if(s[i]=='m')
                {
                    sum +=13;
                }
                if(s[i]=='n')
                {
                    sum +=14;
                }
                if(s[i]=='o')
                {
                    sum +=15;
                }
                if(s[i]=='p')
                {
                    sum +=16;
                }
                if(s[i]=='q')
                {
                    sum +=17;
                }
                if(s[i]=='r')
                {
                    sum +=18;
                }
                if(s[i]=='s')
                {
                    sum +=19;
                }
                if(s[i]=='t')
                {
                    sum +=20;
                }
                if(s[i]=='u')
                {
                    sum +=21;
                }
                if(s[i]=='v')
                {
                    sum +=22;
                }
                if(s[i]=='w')
                {
                    sum +=23;
                }
                if(s[i]=='x')
                {
                    sum +=24;
                }
                if(s[i]=='y')
                {
                    sum +=25;
                }
                if(s[i]=='z')
                {
                    sum +=26;
                }
            }
            else
            {
                if(s[i]=='a')
                {
                    sum *=1;
                }
                if(s[i]=='b')
                {
                    sum *=2;
                }
                if(s[i]=='c')
                {
                    sum *=3;
                }
                if(s[i]=='d')
                {
                    sum *=4;
                }
                if(s[i]=='e')
                {
                    sum *=5;
                }
                if(s[i]=='f')
                {
                    sum *=6;
                }
                if(s[i]=='g')
                {
                    sum *=7;
                }
                if(s[i]=='h')
                {
                    sum *=8;
                }
                if(s[i]=='i')
                {
                    sum *=9;
                }
                if(s[i]=='j')
                {
                    sum *=10;
                }
                if(s[i]=='k')
                {
                    sum *=11;
                }
                if(s[i]=='l')
                {
                    sum *=12;
                }
                if(s[i]=='m')
                {
                    sum *=13;
                }
                if(s[i]=='n')
                {
                    sum *=14;
                }
                if(s[i]=='o')
                {
                    sum *=15;
                }
                if(s[i]=='p')
                {
                    sum *=16;
                }
                if(s[i]=='q')
                {
                    sum *=17;
                }
                if(s[i]=='r')
                {
                    sum *=18;
                }
                if(s[i]=='s')
                {
                    sum *=19;
                }
                if(s[i]=='t')
                {
                    sum *=20;
                }
                if(s[i]=='u')
                {
                    sum *=21;
                }
                if(s[i]=='v')
                {
                    sum *=22;
                }
                if(s[i]=='w')
                {
                    sum *=23;
                }
                if(s[i]=='x')
                {
                    sum *=24;
                }
                if(s[i]=='y')
                {
                    sum *=25;
                }
                if(s[i]=='z')
                {
                    sum *=26;
                }
            }
        }
        cout<<sum<<'\n';
    }
    
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
	
	return 0;
}