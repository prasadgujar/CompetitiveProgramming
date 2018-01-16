#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

#define ll long long int

int main()
{
	int n;
	cin>>n;
	vector<int> p(n),degree(n),child(n);
	for(int i=1;i<n;i++)
	{
		cin>>p[i];
		--p[i];
		degree[p[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		if(degree[i] == 0)
			child[p[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		if( degree[i]>0 && child[i] < 3)
		{
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	return 0;
}