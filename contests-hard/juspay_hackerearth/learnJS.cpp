#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1e9

struct edge {
  ll u, v, wt;
  edge(){};
  edge(ll a, ll b, ll c) {
    u = a;
    v = b;
    wt = c;
  };
};

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
  vector<edge> adj(n);
  while (q--) {
    ll a, b, c;
    cin >> a >> b >> c;
    adj.push_back(edge(m[a], m[b], c));
  }
  ll a, b;
  cin >> a >> b;
  a = m[a];
  b = m[b];

  ll src = a;
  vector<ll> dist(n, INT_MAX);
  dist[src] = 0;
  for (int i = 0; i < n; i++) {
    for (auto j : adj) {
      if (dist[j.u] != INT_MAX)
        dist[j.v] = min(dist[j.v], dist[j.u] + j.wt);
    }
  }
  if (dist[b] == INT_MAX)
    cout << -1 << endl;
  else
    cout << dist[b] << endl;
}