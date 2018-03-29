#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int TrailZero(ll n)
{
    ll k = 0; //count the no of numbers having  exactly x trailing zero's.
    ll counter = 0; //  no of trailing zero's in the number.
    ll m = n; // assiging no n to m.
    while(m>=5) //  while no is greater than 5 we will divide the as want to count no of factor's of 5 in the number.
    {
        m/=5; // divide the no
        k++; // increase the counter.
    }

    while(k>=1) // if there at least one number having factor 0 than we will check the number.
    {
       counter +=(n/pow(5,k--));  // count the no of factor's of 5,25,125..so on // all multiple's of 5.
    }

    return counter; // return the counter

}

int solve()
{
    ll x, i = 0;
    cin >> x; // take input
    while (1)
    {
        if (TrailZero(i) >= x) // if required size exceed than we will break loop as we need exactly x trailing zero's.
        {
            break;
        }
        else //if no of trailing zero size is not exceed than we wil simple increase i by as we need facor's of 5 and trailing zero increase by 5
        {
            i += 5;
        }
    }
    if (TrailZero(i) > x) // if size exceed than print zero as there is answer.
    {
        cout << 0 << '\n';
        continue;
    }
    else
    {
        cout << 5 << '\n'; // at most 5 no ..size of trailing zero's increase by 5.
        for (int j = 0; j < 5; j++)
        {
            cout << i++ << " "; // print the no's.
        }
        cout << '\n';
    }
}
}
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}