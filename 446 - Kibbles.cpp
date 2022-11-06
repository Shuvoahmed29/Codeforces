#include <bits/stdc++.h>
using namespace std;
/*-----------------SHUVO AHMED------------------------------*/
#define nl '\n'
typedef long long int ll;
#define Sort(x) sort(x.begin(), x.end())
#define Reverse(x) reverse(x.begin(), x.end())

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define sq(x) (x) * (x)

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define pb(x) push_back(x)
#define mod 1000000007
/*-----------------SHUVO AHMED--------------------------------*/
int main()
{
    ll t, hex1, hex2, ans;
    char c;
    cin >> t;
    while (t--)
    {
        cin >> hex >> hex1 >> c >> hex >> hex2;
        if (c == '+')
            ans = hex1 + hex2;
        else
            ans = hex1 - hex2;
        cout << bitset<13>(hex1) << " " << c << " " << bitset<13>(hex2) << " = " << ans << nl;
    }
}