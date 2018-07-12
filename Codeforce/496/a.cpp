#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	int a[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector<int> v;
	for(int i=0;i<n;i++)
	{
	
               if(a[i]>a[i+1])
	  {
	  	v.push_back(a[i]);
	  }
	  else if(a[i]==a[i+1])
	  {
	  	v.push_back(a[i]);
	  }
	  else if(i==n-1)
	  {
	  	if(a[i]<a[i+1])
	  	{
	  	   v.push_back(a[i]);	
	  	}
	  }
	  
	}
	
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}