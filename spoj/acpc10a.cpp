#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    while(a||b||c)
    {
        int diff1 , diff2,ok;
        diff1 = b -a ;
        diff2 = c - b;
        // Difference formula =   a2 - a1;
        // Common Ratio Formula =  a2/a1;
        ok = c/b;
        int asta = 0 ;
        int lavista = 0;
        asta =  c + diff1;
        lavista =  c * ok;
        if(diff1 == diff2 ) // if difference between  diff1 and diff2 is same the Ap
        {
            printf("AP %d \n",asta);
        }
        else // else gp
        {
            printf("GP %d \n",lavista);
        }
        scanf("%d%d%d",&a,&b,&c);
    }
    return 0;
}
