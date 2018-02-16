#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,r,q;
    cin>>n>>r>>q;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mod = r%n;
    //cout<<mod<<'\n';
    int x;
    for(int i=0;i<q;i++)
    {
        cin>>x;
        if(x-mod>=0)
        {
            //cout<<a[x-mod]<<" "<<x-mod<<'\n';
            cout<<a[x-mod]<<'\n';
        }
        else
        {
            //cout<<a[x-mod+n]<<"yo "<<x-mod+n<<'\n';
            cout<<a[x-mod+n]<<'\n';
        }
    }
    return 0;
}
