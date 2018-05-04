#include <bits/stdc++.h>

using namespace std;

int main() {
    int n ,k;
    int  sum;
    cin>>n;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
   
    sum=0;
    sort(a,a+n);
   //unique(a,a+n);
    for(int i=0;i<k;i++)
    {
        sum =sum + a[i];
    }
    int res;
    //res=0;
    res=(sum+99)/100;
    cout<<res;
    /*
    if(sum>=1&&sum<=100)
    {
        cout<<1<<'\n';
    }
    else if(sum>=1&&sum<=200)
    {
        
        cout<<"2"<<'\n';
    }
    else if(sum>=1&&sum<=300)
    {
        
        cout<<"3"<<'\n';
    }
    else if(sum>=1&&sum<=400)
    {
        
        cout<<"4"<<'\n';
    }
    else if(sum>=1&&sum<=500)
    {
        
        cout<<"5"<<'\n';
    }
    else if(sum>=1&&sum<=600)
    {
        
        cout<<"6"<<'\n';
    }
    else if(sum>=1&&sum<=700)
    {
        
        cout<<"7"<<'\n';
    }
    else if(sum>=1&&sum<=800)
    {
        
        cout<<"8"<<'\n';
    }
    else if(sum>=1&&sum<=900)
    {
        
        cout<<"9"<<'\n';
    }
    else if(sum>=1&&sum<=1000)
    {
        cout<<"10"<<'\n';
    }*/
    
    return 0;
}