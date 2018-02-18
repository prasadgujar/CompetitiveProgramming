#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int row,column;
    int length;
    length = s.length();
    row = floor(sqrt(length));
    column = ceil(sqrt(length));
    int check  = row * column;
    if(check<length)
    {
        row++;
    }
    for(int inner = 0;inner<column;inner++)
    {
        for(int outer  = inner; outer <length; outer+=column)
        {
            cout<<s[outer];
        }
        cout<<" ";
    }
}
int main() {
   int t;
  //cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
    
    return 0;
}