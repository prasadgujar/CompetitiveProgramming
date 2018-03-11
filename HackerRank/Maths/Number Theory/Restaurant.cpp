#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int l,b;
    cin>>l>>b;
    int ans = (l/__gcd(l,b)*(b/__gcd(l,b)));
    cout<<ans<<'\n';
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
