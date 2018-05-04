#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	int sum,a[26],n,x;
	sum=0;
	char letters[] =   "abcdefghijklmnopqrstuvwxyz";
	for(int i=0;i<26;i++)
	{
		cin>>a[i];
		a[letters[i]]=a[i];
		sum +=a[i];
	}
	n=s.length();
	sort(a,a+n);
	//sum=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]==letters[i])
		{
			//sum +=a[letters[i]];
		}
	}
	
	cout<<sum;
	return 0;
}