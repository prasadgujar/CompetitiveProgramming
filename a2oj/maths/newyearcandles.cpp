
 #include<bits/stdc++.h>
using namespace std;

int main()
{
    int ok;
    ok =  0;
    int x,y;
    cin>>x>>y;
    while(x>=y)
    {
        ok +=y; // we are using candles so add to final total
        x  -=y; // we are  using candles so need to rmove from available candles
        x++; // make new candle greedy
    }
    cout<<ok + x; // used candles and available candles
}