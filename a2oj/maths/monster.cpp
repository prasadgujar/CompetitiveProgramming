#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
    int c,d;
    cin>>a>>b;
    cin>>c>>d;
    //bool  ok =  false; 
    //int xx = b + a;
    //int yy = d = d + c;
    /*if(xx%2==1 && yy%2==0 )
    {
    	cout<<-1;
    	//return 0;
    }
    int aa[100];
      aa[0] = b;
     int bb[100];
     bb[0] = d;
    //queue<int> q;
    //queue<int> qq;
    /*b =  b + a;
    cout<<b<<endl;
    cout<<2*a;
    b += a*2;
    cout<<b<<endl;
    b += a*3;
    cout<<b<<endl;
    b +=4*a;
    cout<<b<<endl;*/
    
    //vector<int> q;
    //ector<int> qq;
    for(int i=0;i<100;i++)
    {
      for(int j=0;j<100;j++)
      {
      	int x =  b + i * a;
      	int y = d + j * c;
      	if(x==y)
      	{
      		cout<<x;
      		return 0;
      	}
      }
     
    }
    /*int ok = -1;
    queue<int> ans;
    for(int i =0;i<=100;i++)
    {
    	for(int j=0;j<=100;j++)
    	{
    		cout<<qq[i]<<" ";
    		if(q[i]==qq[j])
    		{
    			//ans.push_back(q[i]);
    			ok = q[i];
    			cout<<q[i]<<endl;
    			//return 0;
    			break;
    		}
    	}
    
    }*/
    cout<<-1;
	return 0;
}