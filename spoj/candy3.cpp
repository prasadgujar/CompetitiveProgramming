#include <bits/stdc++.h>
using namespace std;

int main() {
	//long long  t,n,sum,i,x;
	//std::cin>>t;
	int t;
	scanf("%d",&t);
	while(t--)
	{
	//long long int a[n];
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long int sum = 0,n,x,i;
	//cn = 0;
	//std::cin>>n;
	scanf("%lld",&n);
	for(i = 0;i<n;i++)
	{
		//std::cin>>x;
		scanf("%lld",&x);
		sum =(sum+x)%n;
	}
	if(sum)
        //std::cout<<"NO"<<'\n';
        printf("NO\n");
    else
        //std::cout<<"YES"<<'\n';
        printf("YES\n");
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

	}
	return 0;
}
