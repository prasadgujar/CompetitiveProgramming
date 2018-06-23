#include <iostream>
using namespace std;

int main() {
    int y,w;
    cin>>y>>w;
    int ok = max(y,w);
    ok = ok - 1;
    int c = 6 - ok ;
    //cout<<ok;
    //cout<<(6-ok)/6;
    if(c==1)
    {
    	cout<<"1/6";
    }
    else if(c==2)
    {
    	cout<<"1/3";
    }
    else if(c==3)
    {
    	cout<<"1/2";
    }
    else if(c==4)
    {
    	cout<<"2/3";
    }
    else if(c==5)
    {
    	cout<<"5/6";
    }
    else if(c==6)
    {
    	cout<<"1/1";
    }
	return 0;
}