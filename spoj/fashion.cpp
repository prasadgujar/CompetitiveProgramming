#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,sum;
	std::cin>>t;
	while(t--)
	{
                        sum = 0;
		std::cin>>n;
		int a[n],b[n];
		for(int i = 0;i<n;i++)
		std::cin>>a[i];
		for(int i =0;i<n;i++)
		std::cin>>b[i];
		std::sort(a,a+n);
		std::sort(b,b+n);
		for(int i = 0;i<n;i++)
		{
			sum =sum+a[i]*b[i];
		}
		std::cout<<sum<<'\n';
	}
	return 0;
}
