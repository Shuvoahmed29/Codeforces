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
#define For(i, n) for (ll i = 0; i < n; i++)
#define FOR(i,x,y) for(ll i=x;i<=y;i++)

#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
#define vp vector<pair<ll,ll>>
#define Pin(x,y) pb(mp(x,y))
#define sl set<ll>
#define Rs set<ll,greater<ll>> //Reverse Set
#define In(x) insert(x)//or use emplace(x)
#define lb(x) lower_bound(x)
#define ub(x) upper_bound(x)

#define ff first
#define ss second
#define rr return 0

#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define tc ll t; cin>>t; while(t--){solve();}
inline void solve();
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mtc int main(){fast;tc;rr;}

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
#define mod 1000000007
#define pi acos(-1)
/*-----------------SHUVO AHMED--------------------------------*/mtc
// int main(){
//     fast;solve();rr;
// }
inline void solve(){
    string str; 
    cin>>str;
    ll cunt=0,sum=0;
    vl vec;
    For(i,str.size()){
        if(str[i]=='1'&&str[i+1]=='1')cunt++;
        else{
            if(str[i]=='1')cunt++;
            vec.pb(cunt);
            cunt=0;
        }
    }
    Sort(vec);
    Reverse(vec);
    For(i,vec.size())if(i%2==0)sum+=vec[i];
    cout<<sum<<nl;
}