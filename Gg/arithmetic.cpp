#include <bits/stdc++.h>
using namespace std;
void solve()
{
 
}
int main() {
	//code
	int t;
	cin>>t;
	int a,b;
	while(t--)
	{
	 
     cin>>a>>b;
    //a=2,b=4;
    cout<<a+b<<"\n";
    cout<<abs(a-b)<<"\n";
    int m = max(a,b);
    int m1 = min(a,b);
    cout<<m/m1<<"\n";
    cout<<a*b<<"\n";
	}
	return 0;
}