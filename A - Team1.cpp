#include <bits/stdc++.h>
using namespace std;
/*-----------------------SHUVO AHMED---------------------------*/
#define nl '\n'
typedef long long int ll;
#define Sort(x) sort(x.begin(), x.end())
#define Reverse(x) reverse(x.begin(), x.end())
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define sq(x) (x) * (x)
#define For(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, x, y) for (ll i = x; i <= y; i++)

#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)
#define vp vector<pair<ll, ll>>
#define Pin(x, y) pb(mp(x, y))
#define sl set<ll>
#define Rs set<ll, greater<ll>> // Reverse Set
#define In(x) insert(x)         // or use emplace(x)
#define lb(x) lower_bound(x)
#define ub(x) upper_bound(x)

#define ff first
#define ss second
#define rr return 0

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc       \
    ll t;        \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
inline void solve();
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Shuvo cout.tie(NULL);
#define mtc               \
    int main()            \
    {                     \
        Code By Shuvo tc; \
        rr;               \
    }
#define shuvo                  \
    int main()                 \
    {                          \
        Code By Shuvo solve(); \
        rr;                    \
    }

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define mod 1000000007
#define pi acos(-1)
/********If Something goes over your head,run after it.********/ shuvo
    /*-----------------------SHUVO AHMED---------------------------*/ // mtc
    inline void
    solve()
{
    ll t, ans = 0;
    cin >> t;
    while (t--)
    {
        vl vec;
        For(i, 3)
        {
            ll x;
            cin >> x;
            vec.pb(x);
        }
        Sort(vec);
        if (vec[1] == 1 && vec[2] == 1)
            ans++;
    }
    cout << ans << nl;
}