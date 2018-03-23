#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int maxn  = 1e5+5;
int n;
int a[maxn];
int main()
{
    int t;
    cin>>t;
    assert(1<=t&&t<=1e5);
    int sumn = 0;
    while(t--)
    {
        cin>>n;
        assert(1<=n&&n<=1e5);
        sumn +=n;
        int cnt[4] = {};
        int sum = 0;
        FOR(i,0,n)
        {
            cin>>a[i];
            assert(0<=a[i]&&a[i]<=1e9);
            sum +=a[i]%4;
            cnt[a[i]%4]++;
        }
        if(sum%4)
        {
            cout<<-1<<'\n';
            continue;
        }
        else
        {
        int ok  = min (cnt[1],cnt[3]);  
        cnt[1] -=ok , cnt[3] -=ok;
        ok +=cnt[1]/2;
        ok +=cnt[3]/2;
        cnt[2] +=cnt[1]/2;
        cnt[2] +=cnt[3]/2;
        ok +=cnt[2]/2;
        cout<<ok<<"\n";  
        }
    }
    assert(sumn<=1e6);
}