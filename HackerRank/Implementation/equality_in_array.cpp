#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[n];
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int cn=0;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
       if(mp[a[i]]>cn)
       {
           cn = mp[a[i]];
       }
    }
     //if(a[0]!=a[1])
       // {cn++;}
    cout<<n-cn;
    return 0;
}
