#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int no,cost,wrapper;
    cin>>no>>cost>>wrapper;
    int total =  no/cost;
    int remind = total;
    while(remind>=wrapper) // if there is money remaining to buy another wrapper of chocolates
    {
        total = total + (remind/wrapper); // total +  after getting chocolate fpr the wrapper // divide the total by wrapper 
        remind = (remind/wrapper)+(remind%wrapper);  // remove the used chocolates
    }

    cout<<total<<"\n";
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
