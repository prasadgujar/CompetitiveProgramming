#include <bits/stdc++.h>
using namespace std;
bool used[26];
int main() {
	
	char a[200][200];
	int i,j;
	for(int i=0;i<200;i++)
	{
		for(int j=0;j<200;j++)
		{
			a[i][j] = '.';
		}
	}
	
	int n,m;
	char c;
	cin>>n>>m;
	cin>>c;
	for(int i=1;i<=n;i++)
	   {
	   	for(int j=1;j<=m;j++)
	   	{
	   	cin>>a[i][j];
	            }
	   }
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]!=c && a[i][j] !='.')
			{
		               if(a[i-1][j] == c)
		               
		               	used[a[i][j] - 'A'] = true;
		               
		               if(a[i+1][j] == c)
		               
		                   used[a[i][j] - 'A'] = true;
		               
		               if(a[i][j-1] == c)
			    
			    	used[a[i][j]-'A'] = true;
			    
			   if(a[i][j+1] == c)
			   
			     used[a[i][j] -'A'] = true;
			   
			}
			
			
			
			
		}
	}
	
	int cn = 0;
	for(int i=0;i<26;i++)
	{
		//cout<<used[i]<<" ";
		if(used[i])
		{
			cn++;
		}
	}
	
	cout<<cn;
	return 0;
}