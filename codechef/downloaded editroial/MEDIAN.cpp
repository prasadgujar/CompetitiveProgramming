#include <iostream> 
 
#include <sstream> 
 
#include <cstdio>   

#include <cstdlib>   

#include <cmath>   

#include <memory.h>   

#include <cctype>   

#include <string>  
 
#include <vector>  
 
#include <list>   

#include <queue>   

#include <deque>  
 
#include <stack>  
 
#include <map>  
 
#include <set>  
 
#include <algorithm>   

using namespace std;  
  
 
#define FOR(i,a,b) for(int (i) = (a); (i) < (b); ++(i)) 
 
#define RFOR(i,a,b) for(int (i) = (a)-1; (i) >= (b); --(i))  

#define CLEAR(a) memset((a),0,sizeof(a))  

#define INF 1000000000 
 
#define PB push_back  

#define ALL(c) (c).begin(), (c).end() 
 
#define pi 2*acos(0.0)  

#define SQR(a) (a)*(a)  

#define MP make_pair  
   

typedef unsigned long long Int;  

 
int n, T;

int A[64];

map<int, int> R;

 
int F(int mask)

{

	int c0 = 0, c1 = 0;

	FOR (i,0,n)
		
                       if (mask & (1 << i))
			
                              c1++;
		
                       else
			
                                c0++;
 
	
                  if (c0 == 0)
		
                       return 0;
	
                  if (c1 >= c0)
		
                  return 1;
	
 
	
if (R.find(mask) != R.end())
		
return R[mask];
	
	
int res = INF;
 
	
FOR (i,0,n)
	
{
		
c0 = 0, c1 = 0;
	
int go = mask;
		
int to = -1;
 
		
FOR (j,i,n)
		
{
		
	if ((mask & (1 << j)) != 0)
	
			c1++;
			
                 else
			
                    {
				
                       go += (1 << j);
				
                       c0++;
			
                      }
 
			
if (c1 >= c0 && go != mask)
			
	to = go;
		
}
		
if (to != -1)
			
res = min(res, F(to)+1);
	
}
	
R[mask] = res;

	return res;

}

 
int main()

{
	
cin >> T;
	
FOR (t,0,T)
	
{
		
R.clear();
 
		
cin >> n;
		
int MAX = 0;
		
FOR (i,0,n)
		
{
			
cin >> A[i];
			
//A[i] = rand() % 10 + 1;
			
MAX = max(MAX, A[i]);
		
}
 
		
int mask = 0;
		
FOR (i,0,n)
			
if (A[i] == MAX)
			
	mask += (1 << i);
 
		
cout << F(mask) << endl;
	
}
 
	
return 0;

}  
