//Rest In Peace

//Includes
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


using namespace std;
using namespace pb_ds;
using namespace pb_ds;


template <class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

double tcount()
{
	static clock_t oldticks;
	clock_t newticks = clock();
	double diff = 1.0* (newticks - oldticks) / CLOCKS_PER_SEC;
	oldticks = newticks;
	return diff;
}

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