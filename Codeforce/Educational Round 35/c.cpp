#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> v;
	int x;
	for(int i=0;i<3;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	bool ispossiable = false;
	if(v[0]==1)
	ispossiable=true;
	if(v[0]==2&&v[1]==2)
	ispossiable=true;
	if(v[0]==3&&v[1]==3&&v[2]==3)
	ispossiable=true;
	if(v[0]==2&&v[1]==4&&v[2]==4)
	ispossiable=true;
	if(ispossiable)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}