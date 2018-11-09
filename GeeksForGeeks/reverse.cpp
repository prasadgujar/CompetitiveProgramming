#include <iostream>
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
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}