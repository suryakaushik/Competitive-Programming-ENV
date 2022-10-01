// Nagging 6 fail
#include <bits/stdc++.h>
using namespace std;

bool canBeVisited(vector<vector<int>> &myGraph, vector<bool> &isVisited,
                  int ind, int dest) {
  if (ind == dest) {
    return true;
  }
  isVisited[ind] = true;
  for (auto j : myGraph[ind]) {
    if (!isVisited[j]) {
      if (j == dest) {
        return true;
      } else {
        if (canBeVisited(myGraph, isVisited, j, dest)) {
          return true;
        }
      }
    }
  }
  return false;
}

int main() {
  int num;
  cin >> num;
  unordered_map<int, int> mapping, reverseMapping;
  for (int i = 0; i < num; i++) {
    int tem;
    cin >> tem;
    mapping[tem] = i;
    reverseMapping[i] = tem;
  }

  vector<vector<int>> myGraph(num);
  vector<vector<int>> graph(num);
  int p;
  cin >> p;
  while (p--) {
    int src, dest;
    cin >> src >> dest;
    myGraph[mapping[dest]].push_back(mapping[src]);
    graph[mapping[src]].push_back(mapping[dest]);
  }

  int src, dest;
  cin >> src >> dest;
  src = mapping[src];
  dest = mapping[dest];

  set<int> result;
  for (int iter : myGraph[dest]) {
    vector<bool> isVisited(num, false);
    if (canBeVisited(graph, isVisited, src, iter)) {
      result.insert(reverseMapping[iter]);
    }
  }
  if (result.size() == 0) {
    cout << -1;
  } else {
    for (int i : result) {
      cout << i << " ";
    }
  }
  cout << endl;
}

// Nagging 18 pass-->DFS from a to b, save all predecessors of b-->Use Union-find Algo(Disjoint Set), try to remove each edge and check if both a and b have different parents.
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void dfs(vector<vector<ll>> &adj, vector<bool> &vis, ll i, set<int> r,
         set<int> &res, ll b) {
  vis[i] = true;
  for (auto j : adj[i]) {
    if(j==b){
      res.insert(i);
    }
    if (!vis[j]) {
      dfs(adj, vis, j, r, res, b);
    }
  }
}
int main() {
  ll n;
  cin >> n;
  map<ll, ll> m;
  map<ll, ll> rm;
  for (int i = 0; i < n; i++) {
    int tem;
    cin >> tem;
    m[tem] = i;
    rm[i] = tem;
  }
  ll q;
  cin >> q;
  vector<vector<ll>> adj(n);
  while (q--) {
    ll a, b;
    cin >> a >> b;
    adj[m[a]].push_back(m[b]);
  }
  ll a, b;
  cin >> a >> b;
  a = m[a];
  b = m[b];
  vector<bool> vis(n, false);
  set<int> r;
  set<int> res;
  dfs(adj, vis, a, r, res, b);
  bool fl1 = vis[b];
  // dfs(adj, vis, b, r, res, a);
  if (fl1) {
    for (int i : res) {
      cout << rm[i] << " ";
    }
  } else {
    cout << -1;
  }
  cout << endl;
}