#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n==1 || n==4 || n==9 || n==12 || n==17 || n==20 || n==25 || n==28 || n==33 || n==36 || n==41 || n==44 || n==49 || n==52 || n==57 || n==60 || n==65 || n==68)
    {
        cout<<"LB";
    }
    else if(n==2 or n==5 or n==10 or n==13 or n==18 or n==21 or n==26 or n==29 or n==34 or n==37 or n==42 or n==45 or n==50 or n==53 or n==58 or n==61 or n==66 or n==69)
    {
        cout<<"MB";
    }
    else if(n==3 or n==6 or n==11 or n==14 or n==19 or n==22 or n==27 or n==30 or n==35 or n==38 or n==43 or n==46 or n==51 or n==54 or n==59 or n==62 or n==67 or n==70)
    {
        cout<<"UB";
    }
    else if(n==7 or n==15 or n==23 or n==31 or n==39 or n==47 or n==55 or n==63 or n==71 )
    {
        cout<<"SLB";
    }
    else if(n==8 or n==16 or n==24 or n==32 or n==40 or n==48 or n==56 or n==64 or n==72)
    {
        cout<<"SUB";
    }
   
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    solve();
    return 0;
}
