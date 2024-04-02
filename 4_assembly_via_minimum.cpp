#include <bits/stdc++.h>
using namespace std;
//--------------------------------------------------------------//
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<long long> vl;
typedef vector<vector<long long>> vvl;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<char> vc;
typedef unordered_map<int,int> umii;
typedef priority_queue<int> maxh;
typedef priority_queue<int,vi,greater<int>> minh;
typedef vector<vector<bool>> vvb;
typedef map<int, int> mii;
typedef map<long long, long long> mll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef unsigned long long ull;
typedef long double ld;

#define ll long long
#define amax(a, b)          a = max(a, b)
#define amin(a, b)          a = min(a, b)
#define mp(a,b)             make_pair(a,b)
#define pb(n)               push_back(n)
#define ff                  first
#define ss                  second
#define bn                  begin()
#define prt(v)              for(auto i:v) cout << i << " "; cout << "\n";
#define en                  end()
#define nl                  ("\n")
#define sp(n)               cout<<setprecision(n)<<fixed;
#define loop(i, a, b)       for (int i = a; i < b; i++)
#define loopr(i, a, b)      for (int i = b; i < a; i--)
#define all(a)              a.begin(), a.end()
#define sz(x)               ((int)(x).size())

// ----------------------------------------------------------------//
const long long MOD = 1000000007;
const int MAX_N = 500001;
const double PI = 3.14159265358979;
const double INF=1e15;

/*---------------------------------------------------------------------------*/ 
bool revsort(ll a, ll b){return (a > b);}
void reverseStr(string&str){int n=str.length();for(int i=0;i<n/2;i++){swap(str[i],str[n-i-1]);}}
bool ispal(string x){int n=x.size();for(int i=0;i<n/2;i++){if(x[i]!=x[n-i-1])return 0;}return 1;}
void printall(vi v){for(auto ele:v)cout<<ele<<" ";}
int modadd(int a, int b,int m){a%=m;b%=m;return (a+b)%m;}
int modmul(int a, int b,int m){a%=m;b%=m;return (a*b)%m;}
int modsub(int a, int b,int m){a%=m;b%=m;return (a-b)%m;}
int gcd(int a, int b){if(b==0)return a;return gcd(b,a%b);}
int expo(int a, int n,int m){int res=1;while(n){if(n&1){res=modmul(res,a,m);--n;}else{a=modmul(a,a,m);n>>=1;}}return res;}
int expo(int a, int n){int res=1;while(n){if(n&1){res=res*a;--n;}else{a=a*a;n>>=1;}}return res;}
/*---------------------------------------------------------------------------*/ 



// =============== !!! ~ ~ ~ code starts here ~ ~ ~ !!! ===============

void solve()
{

    int n;cin>>n;
    long long totalpairs=n*(n-1)/2;
    vector<int>nums(totalpairs);
    loop(i,0,totalpairs){
        cin>>nums[i];
    }

    sort(nums.begin,nums.end);
    for(int i=0;i<totalpairs;i+=--n){
        cout<<nums[i]<<" ";
    }
    cout<<nums[totalpairs-1]<<nl;



}

int main()
{

    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
        //bool as =solve(); cout << (as ? "YES\n" : "NO\n");
        // int as =solve(); cout << as << "\n";
    }
    return 0;
}


#pragma GCC optimize("Ofast")

#pragma GCC target("avx,avx2,fma")

#pragma GCC optimization("unroll-loops")

#include <iostream>

#include <bits/stdc++.h>

// #include "utilities.cpp"

using namespace std;

#define int long long

#define pb push_back

#define all(x) x.begin(), x.end()

#define rall(x) x.rbegin(), x.rend()

#define forn(i, x, n) for (int i = x; i < n; i++)

#define vi vector<int>

#define vpp vector<pair<int,int>>

#define vs vector<string>

#define vll vector<long long>

int row[] = {1,0,-1,0};

int col[] = {0,1,0,-1};

const int mod = 1e9 + 7;





void solve(){   



    int n;

    cin>>n;



    vi a(n*(n-1)/2);

    forn(i,0,n*(n-1)/2) cin>>a[i];



    sort(all(a));

    int k = n-1;

    int ind = 0;



    forn(i,0,n-1){



        int mini = 1e9;

        forn(j,0,k){

            mini = min(a[ind++], mini);

        }

        k--;

        cout<<mini<<' ';

    }

    cout<<mod-7<<' ';

    cout<<'\n';

}  



signed main(){



    std::ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);

    int t = 1;

    cin >> t;

    while (t--) solve();

    return 0;



}