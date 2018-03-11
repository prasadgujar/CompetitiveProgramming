#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void calculate()
{
    int burger,soda,combo;
    cin>>burger>>soda>>combo;
    int added=burger+soda;
    cout<<added-combo<<'\n';
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
        calculate();
    }
    return 0;
}
