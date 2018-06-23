#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   double sum=0;
   int x;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       sum +=x;
   }
   sum  = sum/n;
   cout<<setprecision(5)<<sum;

    
}
