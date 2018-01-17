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
	while(n--)
	{
	int a[4];
	for(int i=0;i<4;i++)
		cin>>a[i];
	sort(a,a+4);
	if(a[0]==a[1]&&a[2]==a[3])
		cout<<"YES"<<'\n';
	else
		cout<<"NO"<<'\n';
            }
return 0;
}