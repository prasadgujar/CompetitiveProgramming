#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    long long int x;
    vector<long long int> v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    long long int med=0;
    sort(v.begin(),v.end());
    if(n%2==0)
    {
        med = (v[v.size()/2-1]+v[v.size()/2])/2;
    }
    else
    {
        med = (v[v.size()/2]);
    }
    long int sum=0;
    for(int i=0;i<n;i++)
    {
        sum +=abs(v[i]-med);
    }
    cout<<sum;
    return 0;
}