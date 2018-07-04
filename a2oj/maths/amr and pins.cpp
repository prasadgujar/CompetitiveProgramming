#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	double r,x,y,x1,y1;
	cin>>r>>x>>y>>x1>>y1;
	double ok;
	ok = sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
	int res = ceil(ok/(2*r));
	cout<<res;
	return 0;
}