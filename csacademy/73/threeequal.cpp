#include <iostream>

using namespace std;

int main() {
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   int b[n];
   int cn=0;
   int cn1=0;
   int cn2 =0;
   for(int i=0;i<n;i++)
   {
       if(a[i]==1)
       {
           cn +=2;
       }
       else if(a[i]==2)
       {
           cn +=1;
       }
        if(a[i]==0)
       {
           cn1 +=1;
       }
       else if(a[i]==2)
       {
           cn1 +=2;
       }
       if(a[i]==0)
       {
           cn2 +=2;
       }
       else if(a[i]==1)
       {
           cn2 +=1;
       }
   }
   cout<<min(min(cn,cn1),cn2);
   return 0;
}