#include<bits/stdc++.h>
using namespace std;

char s[5002]; // declare and assign value

int main()
{
scanf("%s",s); // input
while(s[0]!='0') // while string is not end
{
    int len =  strlen(s); // length
    long long dp[len+1] ={0}; // temporary array for strong result
    dp[0]=1; // assign 1 // base case
    int i = 1;
    while(i<len)
    {
        int no  = (s[i-1]-'0')*10; // 1st digit
        no +=s[i]-'0'; // 2nd digit

        if(s[i]-'0') // check for one digit validity
        {
            dp[i] =  dp[i-1]; // if valid then add
        }
        if(no>9&&no<=26) // check for two digit validity
        {
            dp[i] +=dp[i-2<0?0:i-2]; // if digit is valid and in the range then add to the temporary array
        }
        i++; // increase i for next digit
    }
    printf("%lld\n",dp[len-1]); // the length of array is the no of ways the word can be decoded.
    scanf("%s",s);
}
return 0;
}
