#include <algorithm>
#include <cstdio>
#include <vector>
#include <stack>
#include <set>
using namespace std;

#ifndef DG
#define DG 0
#endif
#define LOG(...) (DG ? fprintf(stderr, __VA_ARGS__) : 0)

void earlydfs(const vector<vector<int>>& edge, vector<char>& visited, int v) {
  visited[v] = 1;
  for (int u : edge[v]) {
    if (!visited[u]) earlydfs(edge, visited, u);
  }
}

struct Case {
  int N, M;
  vector<vector<int>> edge, back, compo;
  vector<int> index, tocompo, parent, compolink;
  stack<int> S;
  vector<char> active, compogood;
  int nextindex = 0;

  void solve() {
    scanf("%d%d", &N, &M);
    edge.resize(N);
    back.resize(N);
    index.resize(N, -1);
    tocompo.resize(N, -1);
    parent.resize(N, -1);
    active.resize(N);
    compogood.resize(N);
    set<pair<int,int> > seenedges;
    while (M--) {
      int a, b;
      scanf("%d%d", &a, &b);
      a--; b--;
      if (seenedges.count(make_pair(a, b))) fprintf(stderr, "BAD! %d %d\n", a, b);
      seenedges.insert(make_pair(a, b));
      edge[a].push_back(b);
      back[b].push_back(a);
    }

    int goal = N-1;

    vector<char> reachstart(N, 0), reachgoal(N, 0);
    earlydfs(edge, reachstart, 0);
    earlydfs(back, reachgoal, goal);
    for (int v = 0; v < N; v++) {
      vector<int> newedge;
      for (int u : edge[v]) {
        if (reachstart[u] && reachgoal[u]) newedge.push_back(u);
      }
      edge[v].swap(newedge);
    }

    dfs(0);

    compolink.resize(compo.size(), -1);
    for (int v = 0; v < N; v++) {
      if (index[v] == -1) continue;
      for (int u : edge[v]) {
        compolink[tocompo[u]] = max(compolink[tocompo[u]], tocompo[v]);
      }
    }

    int highlink = 0;
    for (int c = tocompo[goal]; c < (int)compo.size(); c++) {
      highlink = max(highlink, c);
      if (highlink == c && compo[c].size() == 1) {
        LOG("%d (%d) is good\n", c, compo[c][0] + 1);
        compogood[compo[c][0]] = 1;
      }
      highlink = max(highlink, compolink[c]);
    }

    for (int v = 0; v < N; v++) {
      for (int u : edge[v]) {
        if (u == v) compogood[v] = 0;
      }
    }

    vector<int> winning;
    int f = goal;
    while (true) {
      LOG("(%d)", f);
      if (f == -1) {
        break;
      }
      if (compogood[f]) winning.push_back(f);
      if (f == 0) break;
      f = parent[f];
    }
    reverse(winning.begin(), winning.end());

    printf("%d\n", (int)winning.size());
    for (int i = 0; i < (int)winning.size(); i++) {
      if (i) printf(" ");
      printf("%d", winning[i] + 1);
    }
    printf("\n");
    LOG("-----\n");
  }

  int dfs(int v) {
    index[v] = nextindex++;
    int lowlink = index[v];
    S.push(v);
    active[v] = 1;
    for (int u : edge[v]) {
      if (index[u] == -1) {
        parent[u] = v;
        lowlink = min(lowlink, dfs(u));
      } else if (active[u]) {
        lowlink = min(lowlink, index[u]);
      }
    }
    if (lowlink == index[v]) {
      int c = compo.size();
      compo.resize(c + 1);
      LOG("%d:", c);
      while (true) {
        int u = S.top();
        LOG(" %d", u+1);
        tocompo[u] = c;
        compo[c].push_back(u);
        S.pop();
        active[u] = 0;
        if (u == v) break;
      }
      LOG("\n");
    }
    return lowlink;
  }
};

int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    Case().solve();
  }
}
