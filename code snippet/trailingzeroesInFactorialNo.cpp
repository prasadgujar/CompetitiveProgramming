#include <bits/stdc++.h>
using namespace std;

int FindTrailingZeroes(int n)
{
	int counter = 0;
	for(int i=5;n/i>=1;i*=5)
	{
		counter +=n/i;
	}
	return counter;
}
int main() {
	int n;
	cin>>n;
	cout<<"no of trailing zeroes in the factorial of number."<<FindTrailingZeroes(n);
	return 0;
}