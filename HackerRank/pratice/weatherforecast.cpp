#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[7];
    int b[7];
    for(int i=0;i<7;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<7;i++)
    {
        cin>>b[i];
    }
    int ok = 0;
    for(int i=0;i<7;i++)
    {
        ok +=abs(a[i]-b[i]);
    }

    cout<<ok;
}