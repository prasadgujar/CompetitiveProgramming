#include <iostream>
using namespace std;
void solve()
{
    long long int n;
    cin>>n;
     long long int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    cout<<fact<<"\n";
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