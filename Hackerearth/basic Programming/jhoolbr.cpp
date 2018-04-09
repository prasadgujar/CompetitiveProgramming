

#include <iostream>

using namespace std;

int main() {
	string s;
	cin>>s;
	int n  = s.length();
	bool ok =  false;
	for(int i=0;i<n;i++)
	{
	    if(s[i]=='l')
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if(s[j]=='o')
	            {
	                for(int k=j+1;k<n;k++)
	                {
	                    if(s[k]=='v')
	                    {
	                        for(int e=k+1;e<n;e++)
	                        {
	                            if(s[e]=='e')
	                            {
	                              ok = true;
	                              cout<<"I love you, too!"<<'\n';
	                             return  0;
	                            }
	                        }
	                    }
	                }
	            }
	            
	            }
	        }
	    }
	//}
	if(!ok)
	{
	    cout<<"Let us breakup!"<<'\n';
	}
}
