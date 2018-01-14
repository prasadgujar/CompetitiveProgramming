#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long int n,i;
	cin>>n;
    long long  int v[n];
    long long  int  p[n];
    long long int sum1,sum2;
    sum1=0,sum2=0;
    for(i=0;i<n;i++)
    {
    	cin>>v[i];
    	sum1 +=v[i];
    }
    for(i=0;i<n;i++)
    {
    	cin>>p[i];
    	//sum2 +=p[i];
    }
    sort(p,p+n);
    //reverse(p,p+n);
    sum2 =p[n-1]+p[n-2];
    if(sum1>sum2)
    {
    	cout<<"NO";
    }
    else
    {
    	cout<<"YES";
    }
	return 0;
}