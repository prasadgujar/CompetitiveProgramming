#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <list>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <cassert>
#include <climits>
#include <functional>
#include <bitset>
 
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define rep(i,n) for(int i=0;i<n;i++)
#define print(x) cout<<#x<<" is "<<x<<endl;
#define inf 2000000000
#define eps 1e-8
#define fill(x,y) memset(x,y,sizeof(x))
 
using namespace std;
#define maxn 1001
 
int N, Q;
vector<string> s;
 
#define idx(x) (x=='-'?26:(x-'a'))
 
struct trie {
    int pos, pri;
    struct trie * ch[30];
    trie(int po, int pr){pos=po,pri=pr;rep(i,30)ch[i]=NULL;}
    trie(){rep(i,30)ch[i]=NULL;}
};
 
int c_i, c_p;
string str;
 
trie* ins(trie* node, size_t p) {
    if(p==str.size())
	return NULL;
    int index = idx(str[p]);
    if(!node->ch[index])
	node->ch[index] = new trie(c_i, c_p);
    else if(node->ch[index]->pri < c_p) {
	node->ch[index]->pri = c_p;
	node->ch[index]->pos = c_i;
    }
    node->ch[index] = ins(node->ch[index], p+1);
    return node;
}
 
char _s[maxn];
 
int query(trie* root, size_t p=0) {
    int le = str.size();
    if(p>le || !root)
	return -1;
    if(p==le) {
	return root->pos;
    }
    int index = idx(str[p]);
    return query(root->ch[index], p+1);
}
 
int main() {
    scanf("%d",&N);
    trie* root = new trie(-1,-1);
    for(c_i = 0; c_i < N; c_i++) {
	scanf("%s%d", _s, &c_p);
	str = _s;
	s.pb(str);
	ins(root, 0);
    }
    scanf("%d",&Q);
    while(Q--) {
	scanf("%s", _s);
	str = _s;
	int ret = query(root);
	puts(ret==-1?"NO":s[ret].c_str());
    }
    return 0;
}
