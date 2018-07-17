#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int ok(int d)
{
	int n3 = 0;
	int n5 = 0;
	int n8 = 0;
	while(d)
	{
		int k = d % 10;
		if(k==3)
		n3++;
		else if(k==5)
		n5++;
		else if (k==8)
		n8++;
		else  return 0;
		
	            d /=10;
	}
	
	if(n3<=n5 && n5<=n8) return 1;
	
	return 0;
}
int main() {
	// your code goes here 
	int n , price , len , i;
	int res = 0;
	char buff[1000];
	gets(buff);
	n  = atoi(buff);
	while(n--)
	{
		gets(buff);
		len = strlen(buff);
		for(i=len-1;;i--) if(buff[i]==' ')break;
		//printf("%d\n",buff+i+1);
		price = atoi(buff+i+1);
		if(ok(price)) res++;
	  /*for(i=len-1;;i--) if(buff[i]==' ') break;
              price = atoi(buff+i+1);
              if(ok(price)) res++;*/
	}
	//cout<<res<<"\n";
	printf("%d\n",res);
	return 0;
}