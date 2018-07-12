#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    bool ok = false;
    int found;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==x)
        {
            ok = true;
            found = i;
            break;
        }
    }
    //found++;
    if(ok==true)
    {
        cout<<found-1<<"\n";
    }
    else
    {
        cout<<-1<<"\n";
    }
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