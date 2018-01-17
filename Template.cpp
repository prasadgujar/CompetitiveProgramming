//Rest In Peace

//Includes
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> //common file
#include <ext/pb_ds/tree_policy.hpp> // including tree_order_statistics_node_update
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/exception.hpp> //// For join_error exception.
#include <ext/pb_ds/trie_policy.hpp>
#include <ext/pb_ds/tag_and_trait.hpp>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cassert>
#include <cstdlib>
#include <limits>
#include <sys/resource.h>
#include <valarray>
#include <unordered_map>
#include <unordered_set>
#include <random>
#include <complex>
#include <regex>
#include <numeric>
#include <typeinfo>
#include <type_traits>
#include <fstream>
#pragma comment(linker, "/STACK:167772160")

using namespace std;
using namespace pb_ds;
using namespace pb_ds;

typedef tuple<int , int, int> t3;
typedef long long ll;
typedef unsigned long long ll;
typedef long double LD;
typedef unsigned int uint;
typedef vector<int> vi;
typedef pair< int, int> pii;
typedef pair<ll, int> pli;
typedef pair<ll, ll> pll;
typedef istringstream iss;
typedef ostringstream oss;

const int MAX = 1e5 + 5;
const int LIM = 3e5 + 5;
const int MOD = 1e9 + 7;
const LD EPS = 1e-10;
const double PI = acos(-1.0);

#define pb push_back
#define pf push_front
#define mp make_pair
#define ff first
#define ss second
#define sz size()
#define ln length()
#define rep(i,n) for(int i=0;i<n;i++)
#define fu(i,a,n) for(int i=a;i<=n;i++)
#define fd(i,n,a) for(int i=n;i>=a;i++)
#define all(a) a.begin(),a.end()
#define lb lower_bound
#define ub upper_bound
#define fastio ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);cerr.tie(nullptr)
#define assert(x) {if(!(x)){cerr<<"Assertion failed at line "<<__LINE__<<": "<<#x<<" = "<<(x)<<"\n";exit(1);}}
#define inchar getchar//_unlocked
#define outchar putchar(x)//_unlocked(x)
#define unique sort((a).begin(),a.end()), (a).erase(unique((a.begin(),(a).end()),(a).end())
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>void __f(const char* name, Arg1&& arg1){cout<<name<<" : "<<arg1<<"\n";}
template <typename Arg1, typename... Args>void __f(const char* names, Arg1&& arg1, Args&&... args){const char* comma=strchr(names+1,',');cout.write(names,comma-names)<<" : "<<arg1<<" , ";__f(comma+1, args...);}
double tcount() {static clock_t oldticks; clock_t newticks = clock(); double diff = 1.0* (newticks - oldticks) / CLOCKS_PER_SEC;oldticks = newticks; return diff; }
template<typename T> T gcd(T a,T b) {return (b?__(a,b):a);}
template<typename T> T lcm(T a,T b) {return (a*(b/__gcd(a,b)));}
template<typename T> T mod(T a,T b) {return (a<b ? a : a%b);}
template<typename T> T add(T a, T b, T c){T x=a+b;return (x>=c ? x-c : x);}
template<typename T> T mod_neg(T a,T b) {a=mod(a,b);if(a<0){a+=b}return a;}
template<typename T> T expo(T e,T n){T x=1,p=e;while(n){if(n&1)x=x*p;p=p*p;n>>1;}return x;}
template<typename T> T power(T e,T n, T m) {T x=1%m;p=e;while(n){if(n&1)x=x*p,m};p=mod(p*p,m);n>>=1;}return x;}
template<typename T> T extended_euclid(T a, T b, T &x, T &y){T xx=0,yy=1;y=0;x=1;while(b){T q=a/b,t=b;b=a%b;a=t;t=xx;xx=x-q*xx;x=t;t=yy;yy=y-q*yy;y=t;}return a;}
template<typename T> T mod_inverse(T a, T n){T x,y;T d = extended_euclid(a, n, x, y);return (d>1?-1:mod_neg(x,n));}0
template<typename T> void inPos(T &x){x=0;register T c=inchar();while(((c<48)||(c>57))&&(c!='-'))c=inchar();bool neg=false;if(c=='-')neg=true;for(;c<48||c>57;c=inchar());for(;c>47&&c<58;c=inchar())x=(x<<3)+(x<<1)+(c&15);if(neg)x=-x;}
template<typename T> void outPos(T n){if(n<0){outchar('-');n*=-1;}char snum[65];int i=0;do {snum[i++]=n%10+'0';n/=10;}while(n);i=i-1;while(i>=0)outchar(snum[i--]);outchar('\n');}
inline void instr(char *str){ register char c =  0; register int i = 0; while(c < 33 ) c  = inchar(); while(c != '\n' && c!=' '&& c != EOF){str[i] = c; c = inchar();  ++i;}str[i] = '\0';}
template<typename T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; }
template<typename T> void chmin(T& a, T b) { if (a > b) a = b; }
template<typename T> void chmax(T& a, T b) { if (a < b) a = b; }
template <class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
int main()
{
    //It contains a small code snippet used to increase the stack limit on the Judge.
	const rlim_t Stack_size = 32L * 1024 * 1024;
	struct rlimit lim = {Stack_size, Stack_size};
	if(setrlimit(RLIMIT_STACK, &lim) == -1) assert(false);
    //stack limit code
    
    #ifndef ONLINE_JUDGE
             fropen("inp.txt", "w" , stdout);
     #endif

    cerr << tcount(); // Prints execution time on error screen
}