#include <iostream>
using namespace std;

int main() {
	int n,sum,avg,cn;
	std::cin>>n;
	while(n!=-1)
	{
	int a[n];
	sum = 0;
	cn = 0;
	for(int i = 0;i<n;i++)
	{
		std::cin>>a[i];
		sum +=a[i];
	}
	if(sum%n!=0)
	std::cout<<-1<<'\n';
	else
	{
	 avg =sum/n;
	 for(int i = 0; i < n; i++)
	 {
	 	if(avg>a[i])
	 	cn += avg-a[i];
	 }
	 std::cout<<cn<<'\n';
	}
	std::cin>>n;
	}
	return 0;
}
