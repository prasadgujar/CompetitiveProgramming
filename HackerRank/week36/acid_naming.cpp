#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int len ;
        len  = s.length();
        
        if(s[0]=='h'&&s[1]=='y'&&s[2]=='d'&&s[3]=='r'&&s[4]=='o'&&s[len-2]=='i'&&s[len-1]=='c')
        {
            cout<<"non-metal acid"<<'\n';
        }
        else if(s[len-2]=='i'&&s[len-1]=='c')
        {
            cout<<"polyatomic acid"<<'\n';
        }
        else
        {
            cout<<"not an acid"<<'\n';
        }
    }
    return 0;
}