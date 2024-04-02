    #include <bits/stdc++.h>
    #define ll long long
    #define pb push_back
    #define ff first
    #define ss second
    #define mp make_pair
    #define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    using namespace std;
    const ll mod=1e9+7;
     
    int main()
    {  
        ll t;
        cin>>t;
        while(t--){
            ll n,res = 2;
            cin>>n;
            vector < ll > v(n);
            for(ll i = 0 ; i < n ; i++) {
                cin>>v[i];
            }
            while(1) {
                set < ll > remainder;
                for(ll i = 0 ; i < (ll)v.size() ; i++) {
                    remainder.insert(v[i]%res);
                }
                if((ll)remainder.size() == 2)
                    break;
                res *= 2;
            }
            cout<<res<<endl;
        }
        return 0;     
     }