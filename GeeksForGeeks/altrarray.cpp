{
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main()
{
   int t;
   cin>>t;
  while(t--)
   {
     int ar[100001]={0};
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
      cin>>ar[i];
      print(ar,n);
      cout<<endl;
     }
return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
// ar[] is the array 
// n is the number of elements in array.
void print(int ar[], int n)
{
    
    // code here
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            cout<<ar[i]<<" ";
        }
         
    }
}