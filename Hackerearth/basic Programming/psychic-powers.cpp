

#include <iostream>

using namespace std;

int main() {
    string s;
    cin>>s;
    int n = s.length();
    bool ok = true;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0' && s[i+1]=='0'&&s[i+2]=='0'&&s[i+3]=='0'&&s[i+4]=='0'&&s[i+5]=='0')
        {
            ok = false;
        }
        if(s[i]=='1' && s[i+1]=='1'&&s[i+2]=='1'&&s[i+3]=='1'&&s[i+4]=='1'&&s[i+5]=='1')
        {
            ok = false;
        }
    }
    if(ok)
    {
        cout<<"Good luck!";
    }
    else
    {
        cout<<"Sorry, sorry!";
    }
}
