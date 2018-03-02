#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> first;
    vector<int> second;
    vector<int> third;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x < 0)
        {
            first.push_back(x);
        }
        else if (x == 0)
        {
            second.push_back(x);
        }
        else
        {
            third.push_back(x);
        }
    }
    if (third.size() == 0)
    {
        for (int i = 0; i < 2; i++)
        {
            third.push_back(first.back());
            first.pop_back();
        }
    }

    if (first.size() % 2 == 0)
    {
        second.push_back(first.back());
        first.pop_back();
    }
   
    cout << first.size() << " ";
    for (int i = 0; i < first.size(); i++)
    {
        cout << first[i] << " ";
    }
    cout << endl;
    cout << third.size() << " ";
    for (int i = 0; i < third.size(); i++)
    {
        cout << third[i] << " ";
    }
    cout << endl;
    cout << second.size() << " ";
    for (int i = 0; i < second.size(); i++)
    {
        cout << second[i] << " ";
    }
}
int main()
{
    solve();
}