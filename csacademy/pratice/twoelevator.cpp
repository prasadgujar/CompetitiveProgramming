#include <iostream>

using namespace std;

int main() {
    int n,e1,e2,x1,y1;
    cin>>n>>e1>>e2;
    if(e1>e2)
    {
        swap(e1,e2);
    }
    int up=0,dw=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>x1>>y1;
       if(x1<y1)
        {
            if(x1>=e1)
            {
                up++;
            }
        }
        else
        {
            if(x1<=e2)
            {
                up++;
            }
            
        }
       
        
    }
   
    
    cout<<up;
}