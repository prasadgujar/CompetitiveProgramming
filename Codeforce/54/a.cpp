#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	int n = s.length();
	for(int i=0;i<n;i++)
	{
		if(s[i]=='h')
		{
			for(int j=i+1;j<n;j++)
			{
				if(s[j]=='e')
				{
					for(int k=j+1;k<n;k++)
					{
						if(s[k]=='l')
						{
							for(int h=k+1;h<n;h++)
							{
								if(s[h]=='l')
								{
									for(int l=h+1;l<n;l++)
									{
										if(s[l]=='o')
										{
											cout<<"YES";
											return 0;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout<<"NO"<<'\n';
	return 0;
}