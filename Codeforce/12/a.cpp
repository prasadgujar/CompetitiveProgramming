#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char a[4][4];
	for(register int i=1;i<=3;++i)
	{
		for(register int j=1;j<=3;++j)
		{
			a[i][j] = getchar();
			
		}
		getchar();
	}
	
	if(a[1][1]==a[3][3] && a[3][2]==a[1][2] && a[3][1]==a[1][3] && a[2][1]==a[2][3])
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}