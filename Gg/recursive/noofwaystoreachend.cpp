#include <iostream>
using namespace std;

int ok(int n,int m)
{
    if(m==1 or n==1)
    {
        return 1;
    }
    return ok(m-1,n)+ok(m,n-1);
}
void solve()
{
    int n,m;
    cin>>n>>m;
    cout<<ok(n,m)<<"\n";
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}