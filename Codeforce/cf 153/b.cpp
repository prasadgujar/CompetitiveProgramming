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
	ll n,k,ok=1;
	cin>>n>>k;
	if(k==1)
	{
		cout<<n;
		return 0;

	}
	else
	{
		while(ok<=n)
		{
			ok = ok * 2;
		}
		cout<<ok-1;

	}

	return 0;
}
