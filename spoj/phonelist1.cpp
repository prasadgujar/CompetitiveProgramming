#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    std::cin>>n;
    vector<string> lol;
    for(int i =0;i<n;i++)
    {
        string s;
        std::cin>>s;
        lol.push_back(s);
    }
    bool flag = false;
    std::sort(lol.begin(),lol.end());
    for(int i=0;i<n-1;i++)
    {
        int counter = 0;
        for(int k=0;k<lol[i].size();k++)
        {
            if(lol[i][k]==lol[i+1][k])
                counter++;
        }
        if(counter==lol[i].size())
            flag = true;
    }
    if(!flag)
        std::cout<<"YES"<<'\n';
    else
        std::cout<<"NO"<<'\n';

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    std::cin>>t;
    while(t--)
        solve();
}
