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
    int c[n];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    /*int cn=0;
    for(int i=0;i<n;i++)
    {
        
        if(i+2<n)
        {
            if(c[i+1]==0&&c[i+2]==0)
            {
                i+=2;
                cn++;
            }
            else if(c[i+1]==0&&c[i+2]==1)
            {
                i++;
                cn++;
            }
            else if(c[i+1]==1&&c[i+2]==0)
            {
                i+=2;
                cn++;
            }
        }
        else
        {
            //cn++;
        }
     
    }
    */
    int go = 0;
    for(int i=0;i<n-1;i++,go++)
    {
        //cout<<i<<" ";
        if(c[i+2]==0&&i+2<n)
            //cout<<i<<" "<<'\n';
            i++;
            //cout<<i<<" "<<go;
    }
    //cout<<cn;
    cout<<go;
    return 0;
}
