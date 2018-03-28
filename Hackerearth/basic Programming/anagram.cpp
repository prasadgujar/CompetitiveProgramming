#include <bits/stdc++.h>

using namespace std;
const int z = 26;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
	string a;
	string b;
	cin>>a;
	cin>>b;
	int  hash1[z] = {0};
    int  hash2[z] = {0};
    int n = a.length();
    int m = b.length();
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++)
    {
        hash1[a[i]-'a']++;
    }
     for(int i=0;i<m;i++)
    {
        hash2[b[i]-'a']++;
    }
    int sum = 0;
    for(int i=0;i<26;i++)
    {
        sum +=abs(hash1[i]-hash2[i]);
       
    }
    
    cout<<sum<<'\n';
    }
}

