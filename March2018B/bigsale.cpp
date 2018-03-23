#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            double price, quantity, discount;
            cin >> price >> quantity >> discount;
            double xprice = price + (price * discount) / 100;
            double sub = (xprice * discount) / 100;
            xprice = xprice - sub;
            double loss = 0;
            if (xprice > price)
            {
                continue;
            }
            else
            {
                loss = (price - xprice);
            }
            double added = loss * quantity;
            sum += added;
        }
        cout.precision(2);
        cout << fixed << sum << '\n';
    }

    return 0;
}