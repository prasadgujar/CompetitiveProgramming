#include <iostream>
using namespace std;
 
void solve()
{
	int cn=0;
	int x;
	//string s;
	//cin>>s;
	for(int i=0;i<5;i++)
	{
		cin>>x;
		if(x==1)
		{
			cn++;
		}
	}
	
	if(cn==0)
	{
		cout<<"Beginner"<<'\n';
	}
	else if(cn==1)
	{
		cout<<"Junior Developer"<<'\n';
	}
	else if(cn==2)
	{
		cout<<"Middle Developer"<<"\n";
	}
	else if(cn==3)
	{
		cout<<"Senior Developer"<<"\n";
	}
	else if(cn==4)
	{
		cout<<"Hacker"<<"\n";
	}
	else if(cn==5)
	{
		cout<<"Jeff Dean"<<"\n";
	}
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--)
	{
		solve();
	}
	return 0;
} 