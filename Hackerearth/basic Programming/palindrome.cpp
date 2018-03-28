

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    int n = s.length();
   
    string rev = s;
    reverse(rev.begin(),rev.end());
    if(s==rev)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}
