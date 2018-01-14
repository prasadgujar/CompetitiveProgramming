#include<bits/stdc++.h>
using namespace std;

int count(int *arr,int start,int end)
{
    if(start==end)//base condition
        return 1;
    if((arr[start]*10+arr[start+1])<=26) //1st and 2nd character of string if 1st character in string
    {
     if(end==start+1) // only two element contains and they are same
            return 2;
        else
            return count(arr,start+1,end)+ count(arr,start+2,end);// recursive call for further checking
    }  // it will compare next plus next element
    return count(arr,start+1,end); // return counter
}
int main()
{
    int i ,len ;
    string s;
    int arr[5000];
    while(1)
    {
        std::cin>>s; //input
        if(s[i]==0) break; //if first character is o then simple break;
           // break;
        len=s.length(); // string length
        for(i=0;i<len;++i) // loop through all element
            arr[i]=s[i]-'0'; // convert into number
        std::cout<<count(arr,0,len-1)<<endl; // function call
    }
    return 0;
}
