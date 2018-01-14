#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
if(a==0)
    return b;
else if (b==0)
    return a ;
else
    return gcd(b,a%b);
}
int main() {
	// your code goes here
	long long int n,a,b,result;
	std::cin>>n;
	while(n--)
	{
		std::cin>>a>>b;
        if(a==0)
            std::cout<<b<<'\n';
        else
        result = __gcd(a,b);
		std::cout<<result<<'\n';
	}
	return 0;
}
