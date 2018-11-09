#include<bits/stdc++.h>
using namespace std;

void getZarr(string str, int Z[]);

vector<long long int> v1;
vector<long long int> v2;

void  search(string text, string pattern)
{
	
	string concat = pattern + "$" + text;
	int l = concat.length();

	int Z[l];
	getZarr(concat, Z);

	for (int i = 0; i < l; ++i)
	{
	
		if (Z[i] == pattern.length())
			{
				//cout << "Pattern found at index "
				//<< i - pattern.length() -1 << endl;
			
				v1.push_back(i - pattern.length() -1);
			
			}
	}
	
}

void  searchs(string text, string pattern)
{
	
	string concat = pattern + "$" + text;
	int l = concat.length();

	int Z[l];
	getZarr(concat, Z);

	for (int i = 0; i < l; ++i)
	{
	
		if (Z[i] == pattern.length())
			{
				//cout << "Pattern found at index "
				//<< i - pattern.length() -1 << endl;
			
				v2.push_back(i - pattern.length() -1);
			
			}
	}
	
}
void getZarr(string str, int Z[])
{
	int n = str.length();
	int L, R, k;


	L = R = 0;
	for (int i = 1; i < n; ++i)
	{
	
		if (i > R)
		{
			L = R = i;
			while (R<n && str[R-L] == str[R])
				R++;
			Z[i] = R-L;
			R--;
		}
		else
		{
		
			k = i-L;
			if (Z[k] < R-i+1)
				Z[i] = Z[k];
			else
			{
				
				L = i;
				while (R<n && str[R-L] == str[R])
					R++;
				Z[i] = R-L;
				R--;
			}
		}
	}
}

int main()
{
	string a,b,s;
	cin>>s;
	cin>>a;
	cin>>b;
	search(s, a);
	
	searchs(s,b);
	/*for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<"\n";
	}
		for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<"\n";
	}*/
	long long int na = 2000000001;
	long int x,y;
	int c1;
	for(int i=0;i<v1.size();i++)
	{
		for(int j=0;j<v2.size();j++)
		{
			long int ok  = abs(v1[i]-v2[j]);
			//cout<<ok<<" ";
			//minn = min(minn,ok);
			if(ok<=na)
			{
				na = ok;
				x = min(v1[i],v2[j]);
				y = max(v1[i],v2[j]);
			            if(v1[i]>v2[j])
			            {
			            	c1  = 1;
			            }
			            else if(v2[j]<v1[i])
			            {
			            	c1 = 2;
			            }
			}
		}
	}
	//cout<<na<<" "<<x<<" "<<y;
	long int al = a.length();
	long int bl = b.length();
	long long  int sl = s.length();
	long long int res = 0; 
	long long int pl = 0;
	if(c1==1)
	{
		pl = a.length();
	}
	else
	{
		pl = b.length();
	}
	x++;
	y++;
	//cout<<sl;
	//cout<<a.length();
	long int cc = max(x,y);
	long long int sub = sl-cc;
	//cout<<sub;
	res  = x*(sub-pl);
	if(res<0)
	{
		res = res * - 1;
	}
	cout<<res+1;
	//cout<<x;
	return 0;
}
