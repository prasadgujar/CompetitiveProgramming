#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int TST;
	scanf("%d",&TST);
	getchar();
	for(int tst=0;tst<TST;tst++)
	{
		char s[111];
		gets(s);
		if(strlen(s)==5 && 
			'a'<=s[0] && s[0]<='h' &&
			'1'<=s[1] && s[1]<='8' &&
			s[2]=='-' &&
			'a'<=s[3] && s[3]<='h' &&
			'1'<=s[4] && s[4]<='8')
		{
			if(abs((s[0]-s[3])*(s[1]-s[4]))==2)
				puts("Yes");
			else
				puts("No");
		}
		else puts("Error");
	}
	return 0;
}
