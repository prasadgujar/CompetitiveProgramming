#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	cout<<s;
	reverse(s.begin(),s.end());
	cout<<s;
	return 0;
}