#include<bits/stdc++.h>
using namespace std;

int ReverseDigit(int num)
{
    int rev_num  = 0;
    while(num)
    {
        rev_num = (rev_num*10)+(num%10);
        num = num/10;
    }
    return rev_num;
}
int main()
{
    std::ios::sync_with_stdio(false);
    int test;
    std::cin>>test;
    while(test--)
    {

    int num1,num2;
    std::cin>>num1>>num2;
    std::cout<<ReverseDigit(ReverseDigit(num1)+ReverseDigit(num2));
    std::cout<<'\n';
    }
    return 0;
}
