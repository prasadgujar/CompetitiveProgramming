#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n,x;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
       vector<int> res;
    for(int i=0; i<a.size(); i++) {
        auto it = std::lower_bound(res.begin(), res.end(), a[i]);
        if(it==res.end()) res.push_back(a[i]);
        else *it = a[i];
    }
 
    cout<<res.size()<<"\n";
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