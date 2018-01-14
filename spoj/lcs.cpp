#include<bits/stdc++.h>
using namespace std;

int LCS(string A,string B)
{
    //int m=strlen(a)+1;
    //int n=strlen(b)+1;
    //int dp[m][n];
   int lcs[A.length()+1][B.length()+1];

    for(int i=0;i<=A.length();++i)
        for(int j=0;j<=B.length();++j)
    {
        if(i==0||j==0)
            lcs[i][j]=0;
        else if(A[i-1]==B[j-1])
            lcs[i][j]=lcs[i-1][j-1]+1;
        else
            lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
    }
    return lcs[A.length()][B.length()];
}
int main()
{
    string A,B;
    std::cin>>A;
    std::cin>>B;
   cout<<LCS(A,B)<<'\n';
   return 0;
}
