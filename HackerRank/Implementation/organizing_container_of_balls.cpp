#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*void solve()
{
    int n;
    cin>>n;
    int xsum=0;
    int ysum = 0;
    int x,y;
    cin>>x>>y;
    x+=xsum;
    y+=ysum;
    if(xsum==ysum)
    {
        cout<<"possiable"<<'\n';
    }
    else
    {
        cout<<"impossiable"<<'\n';
    }
       
}
*/
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    cin>>q;
    while(q--)
    {
        //solve();
    
    int n;
     int xsum=0;
    int ysum = 0;
    cin>>n;
        int x;
        vector<int> v1(n,0);
        vector<int> v2(n,0);
      
          for(int i=0;i<n;i++)
          {
              for(int j=0;j<n;j++)
              {
                  cin>>x;
                  //xsum+=a[i][j];
                  //ysum+=a[j][i];
                  v1[i] +=x;
                  v2[j] +=x;
              }
          }
    
        
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
    if(v1[0]==v2[0])
    {
        cout<<"Possible"<<'\n';
    }
    else
    {
        cout<<"Impossible"<<'\n';
    }
       
        //cout<<xsum<<" "<<ysum;
        //cout<<v1[0]<<" "<<v2[0]<<'\n';
    }
    
    return 0;
}
