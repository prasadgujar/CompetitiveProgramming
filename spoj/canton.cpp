#include <bits/stdc++.h>

using namespace std;
int FindDiagonal(int n)
{
	return (sqrt(8*n+1))/2;
	
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	int Diagonal=FindDiagonal(n);
	int EndPoint=((Diagonal*Diagonal)+Diagonal)/2;
	int Difference;
	if(n>EndPoint)
	{
		Difference=n-EndPoint;
	}
	else
	{
		Difference=EndPoint-n;
	}
	if(Diagonal%2==0)
	{
		cout<<"TERM "<<n<<" IS "<<Diagonal-Difference<<"/"<<1+Difference<<'\n';
	}
	else
	{
		cout<<"TERM "<<n<<" IS "<<1+Difference<<"/"<<Diagonal-Difference<<'\n';
	}
	}

	return 0;
}