#include <bits/stdc++.h>
using namespace std;

int countbits(int x)
{
    int cnt = 0;
    while(x)
    {
        if(x&1)
        {
            cnt++;
        }
        x = x>>1;
    }
    return cnt;
}
int cmp(int a,int b)
{
    int c1 = countbits(a);
    int c2 = countbits(b);
    if(c1<=c2)
    {
        return false;
    }
    return true;
}
void solve(int a[],int n)
{
    stable_sort(a,a+n,cmp);
}

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    solve(a,n);
    print(a,n);
    cout<<"\n";
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