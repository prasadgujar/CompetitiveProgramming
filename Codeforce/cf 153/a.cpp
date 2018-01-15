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


int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int maxx=0,x=0;
	for(int i=0;i<n;i++)
	{
		x=0;
		for(int j=i;j<n;j++)
		{
			x= x^a[j];
			if(x>maxx)
				maxx =  x;

		}
	}
	cout<<maxx;
	return 0;
}