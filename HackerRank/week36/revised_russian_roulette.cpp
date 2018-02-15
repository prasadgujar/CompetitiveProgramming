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
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int a1,a2;
    a1=0;
    a2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            a2++;
        }
    }
     for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            a[i+1]=0;
            a1++;
        }
    }
    cout<<a1<<" "<<a2;
    return 0;
}
