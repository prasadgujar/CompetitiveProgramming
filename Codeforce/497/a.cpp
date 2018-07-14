#include <iostream>
using namespace std;

int main() {
	// your code goes her
	string s;
	cin>>s;
	int n = s.length();
	bool ok = true;
	int kk = 0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='n')
		{
		        continue;
			
		}
		else if(s[i]=='b' or s[i]=='c' or s[i]=='d' or s[i]=='f' or s[i]=='g' or s[i]=='h' or s[i]=='j' or s[i]=='k' or s[i]=='l' or s[i]=='m' or s[i]=='p' or s[i]=='q' or s[i]=='r' or s[i]=='s' or s[i]=='t'  or s[i]=='v' or s[i]=='w' or s[i]=='x' or s[i]=='y' or s[i]=='z')
		{
			if(s[i+1]=='a' or s[i+1]=='e' or s[i+1]=='i' or s[i+1]=='o' or s[i+1]=='u' )
			{
				i++;
			continue;
			}
			else
			{
			           ok = false;
				kk = i;
				break;
			}
		}
	
	}
	//cout<<kk; 
	if(ok==true)
	cout<<"yes";
	else
	{
		cout<<"no";
	}
	return 0;
}