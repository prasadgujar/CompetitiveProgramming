#include<bits/stdc++.h>
using namespace std;

int check(int a,int b)
{
	int i  = 0;
	while(i<=b)
	{
		for(int i=1;i<=a;i++)
		{
			if(i<=b)
			{
				b = b - i;
			}
			else
			{
				break;
			}
			
		}
		
		if(i==a+1)
		{
			i = 1;
		}
		
	}
	cout<<b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    // bool  ok  =  true;
   
    //check(a,b);
    int i  = 0;
	while(i<=b)
	{
		for( i=1;i<=a;i++)
		{
			if(i<=b)
			{
				b = b - i;
			}
			else
			{
				break;
			}
			
		}
		
		if(i==a+1)
		{
			i = 1;
			//cout<<a+1;
		}
		
	}
	cout<<b;
   return 0;
}