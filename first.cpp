 #include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl             '\n'
#define int              long long
#define pii              pair<int,int>
#define fi               first
#define se               second
#define all(x)           (x).begin(), (x).end()
#define sz(x)            ((int)(x).size())
#define For(i, a, b) for(int i = (a); i <= (b); i++)
#define Rep(i, a, b) for(int i = (a); i < (b); i++)
#define y0 y2002
#define y1 y2006

template<class T1, class T2> bool chmin(T1 &x, T2 y) { return (x > y ? x = y, 1 : 0); }
template<class T1, class T2> bool chmax(T1 &x, T2 y) { return (x < y ? x = y, 1 : 0); }


template <typename T>
void _print(const T &x, int n){
    For(i, 0, n)
        cerr << x[i] << "  ]"[(i == n) + 1];
    cerr << endl;
}
#define dbg(a,n) cerr << #a << " = ["; _print(a, n);
#define _ << " " <<
#define WA assert(false)
#define db(x) cerr << "[ " << #x << " ]" << " = " << "[ " << x <<" ], "

/// Code goes here
const int mxN = 2e5 + 7;

void solve(){

}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("inp.txt", "r", stdin);
#endif // ONLINE_JUDGE

    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}


