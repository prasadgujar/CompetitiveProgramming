#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve(int n,int m,int k)
{
    int m1,a[100][100];
    for(int i=0;i<n;i++)
    {
        m1 = m;
        a[i][i] = m ;  // assigining the diagonal value
        m1--;
        for(int j=i+1;j<n;j++)
        {
             a[j][i]= m1; //left side of diagonal (Lower)
             a[i][j] = m1; //Right side of diagonal (Upper)
            m1--;
        }
        m = m + k; // adding the value
    }
    
    for(int i=0;i<n;i++)
    {
        for (int j=0; j< n ; j++)
        {
            cout<<a[i][j]<<" ";
        }
        
        cout<<"\n";
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   
    int n;
    int m;
    int k;
    cin>>n;
    cin>>m;
    cin>>k;
    solve(n,m,k);
    return 0;
}
