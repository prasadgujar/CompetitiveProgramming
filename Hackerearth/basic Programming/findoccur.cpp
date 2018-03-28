#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int h = 0;
    int a = 0;
    int c = 0;
    int k = 0;
    int e = 0;
    int r = 0;
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'h')
        {
            h++;
        }
        else if (s[i] == 'a')
        {
            a++;
        }
        else if (s[i] == 'c')
        {
            c++;
        }
        else if (s[i] == 'k')
        {
            k++;
        }
        else if (s[i] == 'e')
        {
            e++;
        }
        else if (s[i] == 'r')
        {
            r++;
        }
        else if (s[i] == 't')
        {
            t++;
        }
    }
    int res = 0;
    while (h >= 2 && e >= 2 && a >= 2 && c >= 1 && k >= 1 && t >= 1 && r >= 2)
    {
        h = h - 2;
        e = e - 2;
        a = a - 2;
        t--;
        r = r - 2;
        //h--;
        c--;
        res++;
    }

    cout << res;
}
