#include <bits/stdc++.h>
using namespace std;

using ll = long long;
double eps = 1e-12;
#define nl               '\n'
#define int              long long
#define pii              pair<int,int>
#define fi               first
#define se               second
#define all(x)           (x).begin(), (x).end()
#define sz(x)            ((int)(x).size())

// U -> R -> D -> L
const int dr[4] = {-1, 0, 1, 0}; 
const int dc[4] = {0, 1, 0, -1};

template<class T1, class T2> bool chmin(T1 &x, T2 y) { return (x > y ? x = y, 1 : 0); }
template<class T1, class T2> bool chmax(T1 &x, T2 y) { return (x < y ? x = y, 1 : 0); }

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
//void __print(ll x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define dbg(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define dbg(x...)
#endif
// <<===== End of template, code goes here =====>> //
const int mxN = 2e5;

void solve(){
    
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    solve();
    return 0;
}
