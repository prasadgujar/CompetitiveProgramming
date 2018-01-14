#include<bits/stdc++.h>
using namespace std;
char s[10];int x;
int lol=9999;


int main()
{
	char a,b,c,d,e,f;
	cin>>s;

	for(a='0';a<='9';a++)
	for(b='0';b<='9';b++)
	for(c='0';c<='9';c++)
	for(d='0';d<='9';d++)
	for(e='0';e<='9';e++)
	for(f='0';f<='9';f++)
	if(a+b+c==d+e+f)
	{
	x=0;
	if(s[0]!=a) x++;
	if(s[1]!=b) x++;
	if(s[2]!=c) x++;
	if(s[3]!=d) x++;
	if(s[4]!=e) x++;
	if(s[5]!=f) x++;
	if(x<lol) lol=x;
	}
cout<<lol;
return 0;
}