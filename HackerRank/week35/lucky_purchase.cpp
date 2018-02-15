#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int req_price  = INT_MAX;
    string req_name;
    for(int i=0;i<n;i++)
    {
        string name;
        int price;
        cin>>name>>price;
        int x = price;
        int c4 = 0;
        int c7 = 0;
        bool ok  = true;
        
        while(x>0)
        {
            if   (x%10==4)  ++c4;
            else if(x%10==7) ++c7;
            else ok  = false;
            x /=10;
        }
        //cout<<ok;
        //cout<<c4<<" "<<c7<<'\n';
        if(c4==c7&&ok)
        {
            if(price<req_price)
            {
                req_price = price;
                req_name =  name;
            }
            
        }
    }
    if(req_price==INT_MAX)
    {
        cout<<-1<<'\n';
    }
    else
    {
        cout<<req_name<<'\n';
    }
  
    return 0;
}
