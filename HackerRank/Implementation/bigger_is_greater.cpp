#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 void solve()
 {
      string w;
    cin>>w;
    string s = w;
     //bool flag = false;
     int cn = 0;
    while(next_permutation(s.begin(),s.end()))
    {
        //sort(s.begin(),s.end());
        //sort(w.begin(),w.end());
        //bool flag = false;
        //char ss = s;
        //char ww  = w;
        //cout<<s<<" "<<w<<'\n';
        if(s>w)
        {
            //cout<<s<<'\n';
            //cout<<"yo";
            cn=1;
            break;
        }
    }
     if(cn==1)
     {
         cout<<s<<'\n';
     }
     else
     {
         cout<<"no answer"<<'\n';
     }
 }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT  
    string w;
    cin>>w;
    string s = w;
    while(next_permutation(s.begin(),s.end()))
    {
        sort(s.begin(),s.end());
        sort(w.begin(),w.end());
        //bool flag = false;
        char ss = s;
        char ww  = w;
        if(ss>ww)
        {
            cout<<ss<<'\n';
            return 0;
        }
    }
    return 0;*/
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}
