#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    //cin>>n>>k;
    int page_no = 1;
    int special = 0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
            for(int j=1;j<=x;j++)
        {
            if(j==page_no)
                special++;
            
            if(j==x or !(j%k))
                page_no++;
            
        }
    }
    cout<<special;
}
int main() {
  solve();
     
    return 0;
}

