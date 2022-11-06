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

#define vl vector<ll>
#define DQ deque<ll>
#define vs vector<string>
#define Erase(y, x) erase(y.begin() + x)         // y vector and x index
#define Insert(y, x, e) insert(y.begin() + x, e) // y vector,x index,e element
#define pb(x) push_back(x)
#define vin(x, v) \
    For(i, x)     \
    {             \
        ll z;     \
        cin >> z; \
        v.pb(z);  \
    }
#define vsum(x) accumulate(x.begin(), x.end(), (ll)0)

#define Q queue<ll>                                     // FIFO--push for input front/pop way
#define SK stack<ll>                                    // LIFO--top/pop way
#define PQ priority_queue<ll>                           // big to small value, top/pop way
#define PSQ priority_queue<ll, vector<ll>, greater<ll>> // small to big value, top/pop way

#define mp(a, b) make_pair(a, b)
// #define vp vector<pair<ll,ll>>
#define Pin(x, y) pb(mp(x, y))
#define ff first
#define ss second

#define sl set<ll>
#define Rs set<ll, greater<ll>> // Reverse Set
#define In(x) insert(x)         // or use emplace(x)
#define lb(x) lower_bound(x)
#define ub(x) upper_bound(x)
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
    int32_t main()        \
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
// freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
/********If Something goes over your head,run after it.********/ // shuvo
/*-----------------------SHUVO AHMED---------------------------*/ mtc inline void solve()
{
    ll n;
    cin >> n;
    ll m = n - 1;
    vl vec;
    vin(n, vec);
    ll sum = vsum(vec), p = 0;
    For(i, n)
    {
        ll d = vec[i];
        ll k = sum - d;
        if (k % m == 0 && k / m == d)
        {
            p = 1;
            break;
        }
    }
    (p == 1) ? yes : no;
}