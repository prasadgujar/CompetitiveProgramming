#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s1,s2;
	cin>>s1>>s2;
	string result="";
	result.push_back(s1[0]);
	for(int i=1;i<s1.length();i++)
	{
		
			if(s1[i]<s2[0])
			{
				
				result.push_back(s1[i]);
				
			}
			else
			{
				break;
			}
		
	}
	result = result + s2[0];
	cout<<result;
	
	return 0;
}