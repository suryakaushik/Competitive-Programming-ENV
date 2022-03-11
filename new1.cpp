#include <bits/stdc++.h>
// #include "stdafx.h"
// #pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
int mpow(int base, int exp);
void ipgraph(int m);
void dfs(int u, int par);
const int mod = 1000000007;
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[N];
const int rtn = 600;
int local[N], bkt[N];
int mat[rtn + 1][rtn + 1];
int dp[rtn + 1][rtn + 1], en[rtn + 1];
unordered_map<int, int> cnt[rtn + 1];

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int i, n, k, j, type, x, _i = 0, q;
    // int b = -1;

    // si(n);
    // si(q);
    int t;
    si(t);
    // for (int i = 0; i < t; i++)
    // {
    //     int l;
    //     si(l);
    //     vi a;
    //     for (int i = 0; i < l; i++)
    //     {
    //         int t;
    //         si(t);
    //         a.push_back(t);
    //     }
    //     int res = -1;
    //     int maxind = max_element(a.begin(), a.end()) - a.begin();
    //     for (int i = 0; i < l; i++)
    //     {
    //         int maxi;
    //         if (a[maxind] == a[i])
    //             maxi = i;
    //         else
    //             continue;
    //         for (int j = 0; j < l; j++)
    //         {
    //             if (maxi == j)
    //                 continue;
    //             for (int k = 0; k < l; k++)
    //             {
    //                 if (j == k || maxi == k)
    //                     continue;
    //                 res = max(res, a[maxi] * (a[k] - a[j]));
    //                 res = max(res, a[j] * (a[k] - a[maxi]));
    //                 res = max(res, a[k] * (a[maxi] - a[j]));
    //                 res = max(res, a[j] * (a[maxi] - a[k]));
    //                 res = max(res, a[k] * (a[j] - a[maxi]));
    //                 res = max(res, a[maxi] * (a[j] - a[k]));
    //             }
    //         }
    //     }
    //     if (i == t - 1)
    //         cout << res;
    //     else
    //         cout << res << endl;
    // }

    for (int p = 0; p < t; p++)
    {
        int n;
        si(n);
        for (int i = 0; i < n; i++)
        {
            cout << i << endl;
            n /= 2;
        }
    }

    return 0;
}