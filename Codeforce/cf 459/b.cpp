#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
	// your code goes here
	int n,m;
	//cin>>n>>m;
	scanf("%d%d",&n,&m);
	map<string,string> m1;
	map<string,string> m2;
	//vector<string> s;
	string name,ip;
	for(int i=0;i<n;i++)
	{
		cin>>name>>ip;
		//scanf("%s%s",&name,&ip);
		m1.insert(pair<string,string> (name,ip));

	}
	map<string,string> :: iterator itr;
   	string cm,cip;
   	for(int i=0;i<m;i++)
	{
		cin>>cm>>cip;
		//scanf("%s%s",&cm,&cip);
		string ccip = cip.substr(0,cip.length()-1);
		//m2.insert(pair<string,string> (cm,cip));
		for(itr = m1.begin();itr!=m1.end();itr++)
		{
			if(itr->second==ccip)
			{
				cout<<cm<<" "<<cip<<" "<<"#"<<itr->first<<"\n";
				//cout<<"yo";
			}

	            }

	}
	/*for(i = m2.begin();i!=m2.end();i++)
	{
		for(j = m1.begin();j!=m1.end();j++)
		{
			if(i->second==j->second)
			{
				cout<<i->first<<" "<<j->second<<" "<<"#"<<i->first<<"\n";
				cout<<"yo";
			}

	            }
	}

	  /*	string str1  = q.second;
	  // string str2 = str1.substr (0,str1.length()-1);
		if(p.second==str2)
		{
			cout<<q.first<<" "<<q.second<<" "<<"#"<<p.first<<'\n';
		}
		}*/

	//}
	return 0;
}
