#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n%12==0)
    {
        cout<<n-11<<" "<<"WS"<<'\n';
    }
    else if(n%12==1)
    {
        cout<<n+11<<" "<<"WS"<<'\n';
    }
    else if(n%12==2)
    {
        cout<<n+9<<" "<<"MS"<<'\n';
    }
    else if(n%12==3)
    {
        cout<<"n+9"<<" "<<"AS"<<'\n';
    }
    else if(n%12==4)
    {
        cout<<"n+7"<<" "<<"AS"<<'\n';
    }
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