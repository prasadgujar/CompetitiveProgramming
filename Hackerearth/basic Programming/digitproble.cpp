#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k;
    cin >> s >> k;
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        if (k > 0)
        {
            if (s[i] == '9')
            {
                continue;
            }
            else
            {
                s[i] = '9';
                k--;
            }
        }
    }

    cout << s;
}