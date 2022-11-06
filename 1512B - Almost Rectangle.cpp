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
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
#define mod 1000000007
#define pi acos(-1)
/********If Something goes over your head,run after it.********/ // shuvo
/*-----------------------SHUVO AHMED---------------------------*/ mtc inline void solve()
{
    ll n;
    cin >> n;
    string str[n];
    For(i, n) cin >> str[i];
    ll p1 = -1, q1 = -1, p2 = -1, q2 = -1, z = 0, z1 = 0;
    For(i, n)
    {
        for (ll j = 0; j < n; j++)
        {
            if (str[i][j] == '*' && z == 0)
            {
                p1 = i;
                p2 = j;
                z = 1;
            }
            else if (str[i][j] == '*' && z1 == 0)
            {
                q1 = i;
                q2 = j;
                z1 = 1;
                break;
            }
        }
    }
    For(i, n)
    {
        for (ll j = 0; j < n; j++)
        {
            if (p1 != q1 && p2 == q2 && n - 1 >= p2 + 1)
            {
                str[p1][p2 + 1] = '*';
                str[q1][q2 + 1] = '*';
                continue;
            }
            else if (p1 != q1 && p2 == q2 && n - 1 >= p2 - 1)
            {
                str[p1][p2 - 1] = '*';
                str[q1][q2 - 1] = '*';
                continue;
            }
            else if (p1 != q1 && p2 != q2)
            {
                str[p1][q2] = '*';
                str[q1][p2] = '*';
                continue;
            }
            else if (p1 == q1 && p1 + 1 <= n - 1)
            {
                str[p1 + 1][p2] = '*';
                str[p1 + 1][q2] = '*';
                continue;
            }
            else if (p1 == q1 && p1 - 1 <= n - 1)
            {
                str[p1 - 1][p2] = '*';
                str[q1 - 1][q2] = '*';
                continue;
            }
        }
    }
    For(i, n) cout << str[i] << nl;
}