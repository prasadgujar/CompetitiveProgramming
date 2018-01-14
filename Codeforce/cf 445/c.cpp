#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	set<int> s;
	int n;
	cin>>n;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		s.insert(x);
	}
	cout<<n-s.size()+1;
	return 0;
}