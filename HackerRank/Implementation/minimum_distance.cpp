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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int min_dist = INT_MAX;
    for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++)
       {
           if(a[i]==a[j])
           {
               min_dist = min (min_dist,abs(j-i));
               //cout<<"yo";
           }
       }
    }
    if(min_dist==2147483647)
    {
        cout<<-1;
    }
    else
    {
         cout<<min_dist;
    }
   
    return 0;
}
