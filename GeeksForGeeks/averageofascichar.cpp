#include <iostream>
using namespace std;

int solve(string s)
{
	int ok = 0;
	int n = s.length();
	for(int i=0;i<n;i++)
	{
		ok +=(int)s[i];
	}
	return ok/n;
}
int main() {
	string s;
	cin>>s;
	cout<<solve(s);
	return 0;
}