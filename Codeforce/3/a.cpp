#include <iostream>
#include <vector>
using namespace std;

int main() {
	string s1,s2;
	cin>>s1>>s2;
	int x1 = s1[0];
	int y1 = s1[1];
	int x2 = s2[0];
	int y2 = s2[1];
	
	vector<string> s;
	while(x1<x2 && y1<y2)
	{
		s.push_back("RU");
		x1++;
		y1++;
	}
	while(x1<x2 && y1>y2)
	{
		s.push_back("RD");
		x1++;
		y1--;
		
	}
	while(x1>x2 && y1 < y2)
	{
		s.push_back("LU");
		x1--;
		y1++;
	}
		while(x1>x2 && y1>y2)
	{
		s.push_back("LD");
		x1--;
		y1--;
	}
	while(x1<x2)
	{
		s.push_back("R");
		x1++;
	}
	while(x1>x2)
	{
		s.push_back("L");
		x1--;
	}
	while(y1<y2)
	{
		s.push_back("U");
		y1++;
	}
	while(y1>y2)
	{
		s.push_back("D");
		y1--;
	}
	
	cout<<s.size()<<"\n";
	for(int i=0;i<s.size();i++)
	{
		cout<<s[i]<<"\n";
	}
	return 0;
}