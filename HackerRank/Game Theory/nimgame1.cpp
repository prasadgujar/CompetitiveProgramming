#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
    int n,x;
    cin>>n>>x;
    int y;
    for(int i=1;i<n;i++)
    {
        cin>>y;
        x =x^y;
        
    }
    if(x>0)
    {
        cout<<"First"<<endl;
    }
    else
    {
        cout<<"Second"<<endl;
    }
    }
    return 0;
}
