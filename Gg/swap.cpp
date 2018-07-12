#include <iostream>
using namespace std;
void solve()
{
    int a,b;
    cin>>a>>b;
    int z = a ;
    a = b;
    cout<<a<<" "<<z<<"\n";
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