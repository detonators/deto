/*
  
            
     |        |                   | 
 ____|  ____ -|--  __  ___   __  -|--  __    _
|    | | |_|  |   |  | |  | |  |  |   |  |  |
|____| |____  |_  |__| |  | |__|_ |__ |__|  |
_________________________________________________
-------------------------------------------------

<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<+*&-------------------&*+>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
*/
#include <bits/stdc++.h>
using namespace std;




// author detonator// 
#define YES cout<<"YES"<<endl;
#define Yes cout<<"Yes"<<endl;
#define yes cout<<"yes"<<endl;
#define NO cout<<"NO"<<endl;
#define No cout<<"No"<<endl;
#define no cout<<"no"<<endl;




// Type Redefenition
#define int long long
#define double long double
#define pii pair<int,int>
#define mii map<int,int>
#define ADJ map<int,set<int>>
#define vpii vector<pii>
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long long>
#define mii map<int,int>





// Input Output Helpers
#define tks(x) string x;cin >> x;
#define tk(a) int a;cin >> a;
#define tk2(a,b)tk(a)tk(b)
#define tk3(a,b,c)tk2(a,b)tk(c)
#define tk4(a,b,c,d)tk2(a,b)tk2(c,d)
#define tk5(a,b,c,d,e)tk4(a,b,c,d)tk(e)
#define tk6(a,b,c,d,e,f)tk3(a,b,c)tk3(d,e,f)
#define tk7(a,b,c,d,e,f,g)tk6(a,b,c,d,e,f)tk(g)
#define tk8(a,b,c,d,e,f,g,h)tk7(a,b,c,d,e,f,g)tk(h)
#define tk9(a,b,c,d,e,f,g,h,i)tk8(a,b,c,d,e,f,g,h)tk(i)
#define addEdge(adj) tk2(u,v) adj[u].insert(v);adj[v].insert(u);
#define test tk(tt)while(tt--)





// Common Helpers
#define ed end()
#define bg begin()
#define sz size()
#define ln length()
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define NL cout << '\n';
#define disp(x) for(auto t : x )cout<<t<<" ";
#define for0(n) for(int i = 0 ; i < n ; i++)
#define for0j(n) for(int j = 0 ; j < n ; j++)
#define oldfor(v) for(auto it = v.begin(); it != v.end(); ++it)
#define SS << ' ' <<
#define arrin(a,n) vi a(n);for0(n){cin >> a[i];}
#define pf(x) cout << x << endl;
#define gridin(num,n,m) for0(n){for0j(m) cin >> num[i][j];}
#define dispgrid(num,n,m) for0(n){for0j(m) cout << num[i][j] << ' '; cout << endl;}
#define pb push_back
#define pp pop_back
#define ff first
#define ss second
#define tk(a) int a;cin >> a;
#define pf(x) cout << x << endl;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define even2 %2==0
#define odd2 %2!=0
#define finalans cout<<ans<<"\n";




typedef long long ll;
typedef unsigned long long ull;
typedef __int128 ell;
 


mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 10; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return mod_add(arr[0], 0, b);} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
ll getRandomNumber(ll l, ll r) {return uniform_int_distribution<ll>(l, r)(rng);} 
/*--------------------------------------------------------------------------------------------------------------------------*/







//replace_junk

// Overloaded Ostream Classes
template<typename F, typename S>
ostream& operator<<(ostream& os,const pair<F,S> &v){return os << "(" << v.F << ", " << v.S << ")";}
template < typename T >
ostream &operator<<(ostream &os,const vector<T> &v){os<< "{";oldfor(v){if(it!=v.bg)os<<", ";os<<*it;}return os << "}";}
template < typename T >
ostream &operator << (ostream &os, const set<T> &v){os << "[";oldfor(v){if(it!=v.bg)os<< ", ";os << *it;}return os << "]";}
template < typename T >
ostream &operator << (ostream &os, const multiset<T> &v){os << "[";oldfor(v){if(it!=v.bg) os << ", ";os<<*it;}return os << "]";}
template < typename F, typename S >
ostream &operator <<(ostream & os, const map<F,S> &v){os << "[";oldfor(v){if(it!=v.bg)os<< ", ";os<< it->F<<" = "<<it->S;}return os << "]";}

//replace_junk






// Constants
const int MOD = 1000000007;
const int N = 100000;
const int MAX_N = 1e5 + 5;
const int MODD = 1e9 + 7;
const int INF = 1e9;





//solution
//input deto
//DATE:  /  /  




/*
Input area deto
*/


/*
Rough???



*/


int32_t main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

 

test{
    tk2(a,b)
    pf(a+b)
}










    
    return 0;
}