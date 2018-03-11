#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

void add(int &a, long long b)
{
    b %= mod;
    a += b;
    if (a >= mod)
    {
        a -= mod;
    }
}
int c2(int x)
{
    return (x * 1LL * (x - 1) / 2) % mod;
}

// the number of axis-parallel bounding boxes of size a*b in n*m board
long long count(int n, int m, int a, int b)
{
    return (n - a + 1) * 1LL * (m - b + 1);
}
int howmanways(int n, int m, long long k)
{
    int ret = 0;
    if (k == 2)
    {
        add(ret, c2(m) * 1LL * n); // two queens are placed horizontally 
        add(ret, c2(n) * 1LL * m); //two queens are placed horizontally
        for (int h = 2; h <= min(n, m); h++) //two queens are placed diagomally
        {
            add(ret, 2LL * count(n, m, h, h));
        }
    }
    else if (k == 3) // cover 8 kind of arrangements 
    {
        //right angle grid
        for (int h = 2; h <= min(n, m); h++) //first four in size of h*h
        {
            add(ret, 4LL * count(n, m, h, h));
        } 

        //next two arrangents in box size (2*h-1,h)
        for (int h = 2; h <= min((n + 1) / 2, m); h++) 
        {
            add(ret, 2ll * count(n, m, 2 * h - 1, h));
        }

        //next two arrangents in box size (h,2*h-1)
        for (int h = 2; h <= min(n, (m + 1) / 2); h++)
        {
            add(ret, 2LL * count(n, m, h, 2 * h - 1));
        }
    }
     
    else if (k == 4) //2 arrangemtns
    {
        for (int h = 2; h <= min(n, m); h++) // queen placed in h*h
        {
            add(ret, count(n, m, h, h));
        }

        // queen placed in the box size (2*h-1,2*h-1)
        for (int h = 2; h <= min((n + 1) / 2, (m + 1) / 2); h++)
        {
            add(ret, count(n, m, 2 * h - 1, 2 * h - 1));
        }
    }

    return ret;
}
int main()
{
    vector<int> fact(5, 1);
    
    //factorial of numbers
    for (int i = 1; i < 5; i++)
    {
        fact[i] = fact[i - 1] * i;
    }

    int t, n, m;
    long long k;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        k += 1;
        if (k >= 5) //atmost there can be 4 qeuens
        {
            cout << 0 << '\n';
            continue;
        }

        int val = howmanways(n, m, k);
        int ans = (val *1LL* fact[k]) % mod; // count the no of ways to place q queens then multipliy with the q!
        cout << ans << '\n';
    }

    return 0;
}