#include <iostream>
using namespace std;

int lps(string s,int i,int j)
{
    if(i==j)
    {
        return 1;
    }
    if(s[i]==s[j] && i+1 == j)
    {
        return 2;
    }
    if(s[i]==s[j])
    {
        return lps (s,i+1,j-1) + 2;
    }
    return max (lps(s,i,j-1),lps(s,i+1,j));
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n = s.length();
	    if(n==1)
	    {
	        cout<<1<<"\n";
	    }
	    else
	    {
	        cout<<lps(s,0,n-1)<<"\n";
	    }
	    
	}
	return 0;
}