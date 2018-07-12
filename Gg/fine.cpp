#include <iostream>
using namespace std;

void solve()
{
    int n,d;
    cin>>n>>d;
    int a[n];
    int no;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(d%2==0)
    {
        for(int i=0;i<n;i++)
        {
            cin>>no;
            if(a[i]%2==0)
            {
                sum +=0;
            }
            else if(a[i]%2==1)
            {
                sum +=no;
            }
        }
    }
    else if(d%2==1)
    {
        for(int i=0;i<n;i++)
        {
            cin>>no;
            if(a[i]%2==1)
            {
                sum +=0;
            }
            else if(a[i]%2==0)
            {
                sum +=no;
            }
        }
    }
    
    cout<<sum<<"\n";
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