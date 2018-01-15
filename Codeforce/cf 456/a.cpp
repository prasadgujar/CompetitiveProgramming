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
	long long int a,b;
	cin>>a>>b;
	long long int x,y,z;
	cin>>x>>y>>z;
	long long int yy,gg,bb;
	yy = x*2 + y*1;
	bb = z*3 + y*1;
	if(yy<=a&&bb<=b)
	{
		cout<<0;
		return 0;
	}
	else if(yy<=a && bb>b)
	{
		long long int total =  0;
			total += abs(bb-b);
			cout<<total;
			return 0;
	}
	else if(yy>a && bb<=b)
	{
		long long int total =  0;
			total += abs(yy-a);
			cout<<total;
			return 0;
	}
	else
	{
	long long int total =  0;
	total += abs(yy-a);
	total += abs(bb-b);
	cout<<total;
	}
	return 0; 

	

}