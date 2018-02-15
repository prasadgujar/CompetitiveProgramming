#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int sum;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        //reverse(a,a+n);
        sum=0;
        for(int i=0;i<n-1;i++)
        {
            sum +=a[i+1]-a[i];

        }
        cout<<sum<<'\n';
    }
    return 0;
}