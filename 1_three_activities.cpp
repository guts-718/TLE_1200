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
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("/Users/sreejith/Desktop/output.txt", "w", stdout);
    #endif
    ll t;
    cin>>t;
    while(t--){
        ll n,res = 0;
        cin>>n;
        vector < ll > a(n),b(n),c(n);
        vector < pair < ll, ll > > va,vb,vc;
        pair < ll, ll > bkp,bkp2;
        for(ll i = 0 ; i < n ; i++) {
            cin>>a[i];
            va.pb(mp(a[i],i));
        }
        for(ll i = 0 ; i < n ; i++) {
            cin>>b[i];
            vb.pb(mp(b[i],i));
        }
        for(ll i = 0 ; i < n ; i++) {
            cin>>c[i];
            vc.pb(mp(c[i],i));
        }
        sort(va.begin(),va.end(),greater <> ());
        sort(vb.begin(),vb.end(),greater <> ());
        sort(vc.begin(),vc.end(),greater <> ());
 
        for(ll i = 0 ; i < 3 ; i++) {
            for(ll j = 0 ; j < 3 ; j++) {
                for(ll k = 0 ; k < 3 ; k++) {
                    if(va[i].second!=vb[j].second and va[i].second!=vc[k].second and vb[j].second!=vc[k].second) {
                        res = max(va[i].first+vb[j].first+vc[k].first,res);
                    }
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;     
 }

 /*
 #include <bits/stdc++.h>
#define int long long
using namespace std;
bool compare(vector<int>&a, vector<int>&b){
  return a[0]>=b[0];
}

int32_t main() {
	 int t;
	 cin>>t;
	 while(t--){
	   int n;
	   cin>>n;
	   vector<vector<int>>arr;
	   for(int i=0;i<3;i++){
	     for(int j=0;j<n;j++){
	       int x;
	       cin>>x;
	       arr.push_back({x,j,i});
	     }
	   }
	   int ans=0;
	   unordered_set<int>st;
	   unordered_set<int>s2;
	   int cnt=0;
	   sort(arr.begin(),arr.end(),compare);
	   for(auto x:arr){
	     if(st.size()==0){
	        st.insert(x[1]);
	         s2.insert(x[2]);
	       ans+=x[0];
	       cnt++;
	       
	     }else if(st.find(x[1])==st.end() && s2.find(x[2])==s2.end()){
	         st.insert(x[1]);
	         s2.insert(x[2]);
	         ans+=x[0];
	         cnt++;
	       }
	       if(cnt==3)break;
	     
	   }
	   cout<<ans<<endl;
	 }
	 return 0;
}
*/