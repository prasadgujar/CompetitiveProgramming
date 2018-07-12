#include <iostream>
using namespace std;

int main() {
	// your code goes here 
	int sum=0;
	int x;
	for(int i=0;i<5;i++)
	{
		cin>>x;
		sum +=x;
	}
	if(sum%5==0 && sum>0)
	{
		cout<<sum/5;
	}
	else
	{
		cout<<-1;
	}
	return 0;
}