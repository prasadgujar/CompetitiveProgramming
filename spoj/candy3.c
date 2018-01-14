#include <iostream>
using namespace std;

int main() {
	long long  t,n,sum,i,x;
	std::cin>>t;
	while(t--)
	{
	//long long int a[n];
	sum = 0;
	//cn = 0;
	std::cin>>n;
	for(i = 0;i<n;i++)
	{
		std::cin>>x;
		sum +=x/n;
	}
	if(sum)
        std::cout<<"no"<<'\n';
    else
        std::cout<<"yes"<<'\n';
	/*if(sum%n!=0)
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
	*/
	return 0;
}
