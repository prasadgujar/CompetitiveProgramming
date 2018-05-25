#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int target = a[0];
    //cout<<target;
    int ok =  0;
    for(int i=1;i<n;i++)
    {
    	ok +=abs(a[i]-target);
    }
    cout<<ok<<"\n";
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
