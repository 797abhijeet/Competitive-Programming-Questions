#include <bits/stdc++.h>
using namespace std;

// --------------------- Type Aliases ---------------------
#define ll long long
#define ld long double

#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>

// --------------------- STL Shortcuts ---------------------
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define ff first
#define ss second

// --------------------- IO Optimization ---------------------
#define FAST                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

// --------------------- Input Macros ---------------------

#define readvll(v, n) \
    vector<ll> v(n);  \
    for (auto &x : v) \
        cin >> x;

// --------------------- Constants ---------------------
const ll INF = 1e18;
const ll MOD = 1e9 + 7;

// --------------------- Debug (for LOCAL only) ---------------------
#ifndef ONLINE_JUDGE
#define debug(x)         \
    cerr << #x << " = "; \
    _print(x);           \
    cerr << endl;
#else
#define debug(x)
#endif

template <typename T>
void _print(T t) { cerr << t; }
template <typename T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
        _print(i), cerr << " ";
    cerr << "]";
}
template <typename T, typename U>
void _print(pair<T, U> p) { cerr << "(" << p.ff << ", " << p.ss << ")"; }

// --------------------- Math Utilities ---------------------
ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

ll add(ll a, ll b) { return (a % MOD + b % MOD) % MOD; }
ll mul(ll a, ll b) { return (a % MOD * b % MOD) % MOD; }

ll power(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = mul(res, a);
        a = mul(a, a);
        b >>= 1;
    }
    return res;
}

// --------------------- Combinatorics ---------------------
vector<ll> fact, invFact;

void initFactorials(int n)
{
    fact.resize(n + 1);
    invFact.resize(n + 1);
    fact[0] = 1;
    for (int i = 1; i <= n; ++i)
        fact[i] = mul(fact[i - 1], i);
    invFact[n] = power(fact[n], MOD - 2);
    for (int i = n - 1; i >= 0; --i)
        invFact[i] = mul(invFact[i + 1], i + 1);
}

ll nCr(int n, int r)
{
    if (r > n || r < 0)
        return 0;
    return mul(fact[n], mul(invFact[r], invFact[n - r]));
}

// --------------------- Sieve ---------------------
vector<int> isPrime;
void sieve(int n)
{
    isPrime.assign(n + 1, 1);
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = 0;
        }
    }
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
}

// --------------------- Main ---------------------//
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

    FAST

        int t;
    cin >> t;

    while (t--)

        solve();

    return 0;
}
