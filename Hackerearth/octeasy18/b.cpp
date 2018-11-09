#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    //bool ok =  true;p
   
    
    double res = 0.000000;
    long int x,va,vb;
    cin>>x>>va>>vb;
     vector< int > v1,v2;
    for(int i=0;i<=100;i+=va)
    {
        v1.push_back(i);
    }
    for(int i=x;i<=100;i+=vb)
    {
        v2.push_back(i);
    }
    bool  ok = false;
    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v2.size();j++)
        {
            if(v1[i]==v2[j])
            {
                //ok = true;
                break;
            }
        }
        
    }
    double dd = 2*x;
    res=(dd)/(va-vb);
    if(x==0)
    {
        cout<<0.000000;
        return 0;
    }
if(va>vb || (va==vb && x==0))
{
    ok  = true;
}
    //long int dis = (va*vb)/__gcd(va,vb);
    //res += dis/va;
    //res += x/va;
     if(ok==false)
     {
         cout<<-1;
     }
     else if(ok==true)
    {
        //round(res);
        //res= res *2;
         cout << fixed << setprecision(6) << res; 
    }
    
    
}