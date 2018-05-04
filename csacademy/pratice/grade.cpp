#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
     int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    sort(a,a+n);
    for(int i=1;i<=n-2;i++)
    {
        sum +=a[i];
    }
  n=n-2;
   cout<<sum/n;
    return 0;
}