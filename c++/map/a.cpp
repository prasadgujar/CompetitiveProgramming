#include <bits/stdc++.h>
using namespace std;

int main() {
	map<string,double> coll {
		{"tim",9.9},
		{"struppi",11.77}
	};
	
	for_each(coll.begin(),coll.end(),[] (pair<const string, double>& elem) 
	{
		elem.second *=elem.second;
	});
	for_each(coll.begin(),coll.end(),[] (const map<string,double>::value_type& elem)
	{
		cout<<elem.first << ": " << elem.second << endl;
	});
	return 0;
}