#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a;
    cin >> a;
    long long int ok = 0;
    /*for(int i=1;i<=a;i++)
    {
        if(i%2==1)
        {
            ok  -=i;
            
        }
        else if((i==a)&&(i%2==1))
        {
        	ok-=i;
        }
        else
        {
            ok +=i;
        }
    } */
    if (a % 2 == 0)
    {
        ok = a / 2;
        cout << ok;
    }
    else
    {
        a++;
        ok = a / 2;
        cout << -(a);
    }

    return 0;
}