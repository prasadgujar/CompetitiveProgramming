//http://codeforces.com/contest/805/problem/B


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin>>n;
    for(int i = 0; i<n;i++)
     putchar(i & 2 ? 'b' : 'a');
    puts("");


}