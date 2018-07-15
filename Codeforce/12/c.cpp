#include <bits/stdc++.h>
using namespace std;
//int get_second( pair<string, int> i ){ return i.second; }
int main() {
	int n,m;
	cin>>n>>m;
	vector<int> vv;
	string s[m];
	map<string,int> mp;
	int nn;
	for(int i=0;i<n;i++)
	{
		cin>>nn;
		vv.push_back(nn);
	}
	sort(vv.begin(),vv.end());
	for(int i=0;i<m;i++)
	{
		cin>>s[i];
		mp[s[i]]++;
		//cout<<mp[s[i]]<<" ";
		
	}
	vector<int> v;
	for (auto& x: mp) {
    //std::cout << x.first << ": " << x.second << '\n';
    int rip  = x.second;
    
    v.push_back(rip);
  }
  int ok = 0;
   sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
  for(int i=0;i<v.size();i++)
  {
  	//cout<<v[i]<<" "<<vv[i]<<endl;
    ok +=v[i]*vv[i];	
  }
  sort(v.begin(),v.end());
   reverse(v.begin(),v.end());
  reverse(vv.begin(),vv.end());
  int okok = 0;
  for(int i=0;i<v.size();i++)
  {
    okok +=v[i]*vv[i];	
  }
  cout<<ok<<" "<<okok;
/*	vector<int> v( mp.size() );
  transform( mp.begin(), mp.end(), v.begin(), get_second );
  sort( v.begin(), v.end() );
  for (int i=0; i<v.size(); i++) cout << v[i] << endl;*/

	return 0;
}