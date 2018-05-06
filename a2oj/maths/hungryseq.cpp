#include <bits/stdc++.h>
using namespace std;

void sieveoferatosthenes(int res)
{
    int n = 10000000;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i * 2; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    vector<int> resvec;

    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            //cout<< i << " ";
            resvec.push_back(i);
        }
    }
    for (int i = 0; i < res; i++)
    {
        cout << resvec[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    sieveoferatosthenes(n);
    return 0;
}