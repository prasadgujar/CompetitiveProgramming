#include <iostream>
#include <cstdlib>

using namespace std;
#define MAX_MATCHES 200000000

//Array to store matched indexes
long long int FOUND[MAX_MATCHES];
long long int FOUND[MAX_MATCH];
//variable to store last index in FOUND array
static long long int l = 0;

//Partial match table
void kmp_table(string W, int *T )
{
 long long int pos = 2;
 long long int cnd = 0;
 long long int length = W.length();
 
 T[0] = -1;
 T[1] = 0;
 
 while( pos < length)
 {
  if(W[pos-1] == W[cnd])
  {
   T[pos] = cnd + 1;
   cnd++;
   pos++;
  }
  else if( cnd > 0)
   cnd = T[cnd];
  else
  {
   T[pos] = 0;
   pos++;
  }
 }
}

//Search function
void kmp_search(string S, string W)
{
 
 int m = 0; 
 int i = 0;
 int sizeS = S.length();
 int sizeW = W.length();
 
 int *T = new int[sizeof(int) * sizeW];
 
 kmp_table(W, T);
 
 while( (m + i) < sizeS)
 {
  if (W[i] == S[m + i]) 
  {
            if (i == (sizeW - 1))
            {
             
             FOUND[l++] = m;
   }
    
            i++;
        }
        else
        {
            if (T[i] > -1)
            {
                m = m + i - T[i];
    i = T[i];
            }
            else
            {
                m = m + 1;
    i = 0;
            }
        }
 }
 
 delete(T);
}

int main()
{
 string s;
 sting W;
 string b;
 
 
 kmp_search(S,W);
  
 for (long long int i = 0 ; i < l; i++)
  cout<<"Pattern found at "<< FOUND[i] <<endl; 
  
}