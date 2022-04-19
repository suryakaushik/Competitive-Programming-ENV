// https://www.codechef.com/START34D?order=desc&sortBy=successful_submissions

#include <bits/stdc++.h>
using namespace std;
// #include <iomanip>
// #include "stdafx.h"
// #pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

// cout.width(5), precision(2), fill(' '), setf(ios::fixed, ios::floatfield, ios::showpos, ios::showpoint), unsetf()
// cout << setiosflags(ios::showpos); cout << setfill('*') << setw(10);

// SPLIT SENTENCE
// istringstream ss(str); string word;
// while (ss >> word) cout << word;

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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cin.tie(0);
    // cout.tie(0);

    int t;
    si(t);
    // for (int p = 0; p < t; p++)
    // {
    //     ll n, k;
    //     cin >> n >> k;
    //     string s;
    //     cin >> s;
    //     ll a[n];
    //     ll one = 0;
    //     ll zero = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         a[i] = s[i] - '0';
    //         if (a[i] == 1)
    //         {
    //             one++;
    //         }
    //         else
    //         {
    //             zero++;
    //         }
    //     }
    //     if (k == n)
    //     {
    //         if (zero == 0 || one == 0)
    //             cout << "YES\n";
    //         else
    //             cout << "NO\n";
    //         continue;
    //     }
    //     if (one >= k && (one - k) % 2 == 0)
    //     {
    //         cout << "YES\n";
    //         continue;
    //     }
    //     if (one % 2 == 0 && (zero + (one / 2)) >= k)
    //     {
    //         cout << "YES\n";
    //         continue;
    //     }
    //     cout << "NO\n";
    // }

    for (int pem = 0; pem < t; pem++)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll a[n];
        ll one = 0;
        for (int i = 0; i < n; i++)
        {
            a[i] = s[i] - '0';
            if (a[i] == 1)
            {
                one++;
            }
        }
        ll p = 0;
        ll zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (p == a[i])
            {
                zero++;
                if (p == 1)
                {
                    p = 0;
                }
            }
            else
            {
                p = 1;
            }
        }
        if (one % 2 == 0)
        {
            if (one >= k && (one - k) % 2 == 0)
            {
                cout << "YES\n";
            }
            else
            {
                if (zero >= k)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
        else
        {
            if (one >= k && (one - k) % 2 == 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}