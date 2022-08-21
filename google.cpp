#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define PI 3.1415926535897932384626
const int mod = 1000000007;
const int N = 3e5, M = N;

#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define ll long long
#define si(x) cin >> x
#define sl(x) cin >> x
#define ss(s) cin >> s
#define pi(x) cout << x
#define pl(x) cout << x
#define ps(s) cout << s
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
int mpow(int base, int exp);
void ipgraph(int m);
void dfs(int u, int par);

vi g[N];
int a[N];
const int rtn = 600;
int local[N], bkt[N];
int mat[rtn + 1][rtn + 1];
int dp[rtn + 1][rtn + 1], en[rtn + 1];
unordered_map<int, int> cnt[rtn + 1];

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cin.tie(0);
    // cout.tie(0);

    int t;
    si(t);
    for (int iter = 0; iter < t; iter++)
    {
        int n;
        si(n);
        for (int i = 0; i < n; i++)
        {
            int tem;
            si(tem);
        }
        cout << "Case #" << iter + 1 << ": ";
        int res = 0;


        for (int i = 0; i < n; i++)
        {
            res = 0;
        }
        cout << res << endl;
    }

    return 0;
}