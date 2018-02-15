#include <cstdio>
#include <iostream>
using namespace std;
 
main() {
  int cases;
  cin>>cases;
  while(cases--) {
    int n;
    int ret = -1;
    cin>>n;
    for(int sevens = 0; sevens < 28 && sevens <= n; sevens+=4) {
      int fours = n - sevens;
      if(fours % 7 == 0) {
        ret = fours;
        break;
      }
    }
    cout<<ret<<endl;
  }
}
