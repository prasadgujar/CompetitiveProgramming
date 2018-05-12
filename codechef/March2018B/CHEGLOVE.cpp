#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        bool front = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= b[i])
            {
                continue;
            }
            else if (a[i] > b[i])
            {
                front = false;
                break;
            }
        }
        bool back = true;
        reverse(b,b+n);
        for (int i = 0; i<n; i++)
        {
            if (a[i] <= b[i])
            {
                continue;
            }
            else if (a[i] > b[i])
            {
                back = false;
                break;
            }
        }

        if (front==true and back==true)
        {
            cout << "both" << '\n';
        }
        else if (front)
        {
            cout << "front" << '\n';
        }
        else if (back)
        {
            cout << "back" << '\n';
        }
        else
        {
            cout << "none" << '\n';
        }
    }
}