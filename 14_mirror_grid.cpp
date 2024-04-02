// simple implementation, brute force method --> create all the 4 matrix and compare the cells..
// try to make each corresponding cell same by using the min(zero,one)...

#include <bits/stdc++.h>
using namespace std;
using namespace __gnu_pbds;

#define sz(V) ll(V.size())
// function
ll power(ll x,ll y,ll mod)
{
    ll res=1;
    // x=x%mod;
    while(y>0){
        if(y%2==1){
            res*=x;
            // res=res%mod;
        }
        y/=2; x*=x; // x=x%mod;
    }
    return res;
}
ll str_to_num(string s){
    return stoi(s);
}
string num_to_str(ll num){
    return to_string(num);
}

const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
void rotateMatrix(vector<vector<int>>&v, int n){
    for(int i=0;i<n/2;i++){
        for(int j=i;j<n-i-1;j++){
            int ptr = v[i][j];
            v[i][j] = v[n - 1 - j][i];
            v[n - 1 - j][i] = v[n - 1 - i][n - 1 - j];
            v[n - 1 - i][n - 1 - j] = v[j][n - 1 - i];
            v[j][n - 1 - i] = ptr; 
        }
    }
}


ll solve(){
    int n;
    cin>>n;
    int ans=0;
    vector<vector<int>>v(n,vector<int>(n,0)),v1(n,vector<int>(n,0)),v2(n,vector<int>(n,0)),v3(n,vector<int>(n,0));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char ch;
            cin>>ch;
            v[i][j]=ch-'0';
        }
    }
    v1=v;
    rotateMatrix(v1,n);
    v2=v1;
    rotateMatrix(v2,n);
    v3=v2;
    rotateMatrix(v3,n);

    for(int i=0;i<(n+1)/2;i++){
        for(int j=0;j<n/2;j++){
            int one=0,zero=0;
            if(v[i][j]==1){
                one++;
            }
            else{
                zero++;
            }
            if(v1[i][j]==1){
                one++;
            }
            else{
                zero++;
            }
            if(v2[i][j]==1){
                one++;
            }
            else{
                zero++;
            }
            if(v3[i][j]==1){
                one++;
            }
            else{
                zero++;
            }
            ans+=min(one,zero);
        }
    }
    cout<<ans<<endl;
    return 0;
}
int main(){
    speed;
    /*
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif 
    */
    ll TestCase=1;
    cin>>TestCase;
    while(TestCase--){
        solve();
    }
}
/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission 
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/