#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    int t;
    cin>>n>>t;
    int a[n];
    int tm=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    sort(a,a+n);
    int cn=0;
    //int sum=0;
   
        for(int i=0;i<n;i++)
        {
            if(a[i]<=t)
            {
                t-=a[i];
                cn++;
            }
        }
        
    
    //cout<<sum<<'\n';
    cout<<cn;
    return 0;
}
