#include <iostream>
#include <vector>
using namespace std;

int a[] = {1,2,5,10,20,50,100,500,1000};
int n = 9;

int solve(int v)
{
	vector<int> ok;
	
	for(int i=n-1;i>=0;i--)
	{
		while(v>=a[i])
		{
			v-=a[i];
			ok.push_back(a[i]);
		}
	}
	return ok.size();
}
int main() {
	int v;
	cin>>v;
	cout<<solve(v);
	return 0;
}