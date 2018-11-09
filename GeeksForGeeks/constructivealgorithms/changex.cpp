#include <iostream>
using namespace std;

int solve(int a[],int n)
{
	int five = 0;
	int ten = 0;
	
	for(int i=0;i<n;i++)
	{
		if(a[i]==5)
		{
			five++;
		}
		else if(a[i]==10)
		{
			if(five>0)
			{
				five--;
				ten++;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			if(five>0&&ten>0)
			{
				five--;
				ten--;
			}
			else if(five>=3)
			{
				five -=3;
			}
			else
			{
				return 0;
			}
		}
	}
	return 1;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(solve(a,n))
	{
		cout<<"yes"<<"\n";
	}
	else
	{
		cout<<"no"<<"\n";
	}
	return 0;
}