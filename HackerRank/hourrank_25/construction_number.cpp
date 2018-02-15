#include <bits/stdc++.h>

using namespace std;
#define ll long long int
ll ok;
vector<ll> v;
ll x;
/*ll sumDigits(ll no)
{
   return no == 0 ? 0 : no%10 + sumDigits(no/10) ;
}*/
int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        if(n==1)
        {
        int e;
        
           cin >> e;
        
        if(e%3==0)
        {cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        }
        else
        {
            ok =0;
            for(ll i=0;i<n;i++)
            {
                cin>>x;
                ok+=x;
            }
             if(ok%3==0)
        {cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        }
    }
    return 0;
}