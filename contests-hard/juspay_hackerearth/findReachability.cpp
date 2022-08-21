#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1e9
void dfs(vector<vector<ll>> &adj, vector<bool> &vis, ll i) {
  vis[i] = true;
  for (auto j : adj[i]) {
    if (!vis[j]) {
      dfs(adj, vis, j);
    }
  }
}
int main() {
  ll n;
  cin >> n;
  map<ll, ll> m;
  for (int i = 0; i < n; i++) {
    int tem;
    cin >> tem;
    m[tem] = i;
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
  dfs(adj, vis, a);
  if (vis[b]) {
    cout << 1;
  } else {
    cout << 0;
  }
  cout << endl;
}