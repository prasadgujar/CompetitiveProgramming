#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
   string name;
    int dec,jan;
   string winner="";
   int win=-1;
    
    while(n--)
    {
        cin>>name>>dec>>jan;
         int ok=jan-dec;
        if(ok>win)
        {
            win=ok;
            winner=name;
        }
    }
    cout<<winner<<" "<<win;
    return 0;
}
