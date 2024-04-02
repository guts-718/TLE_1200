#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n;
        cin >> n;
        int a[n];
        unordered_map<int, int> mp;
        int m = 0;
        int second =-1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            
            m = max(m, mp[a[i]]);
        }

        
        

        if (m == n)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";

        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[0])
            {
                second = i;
                break;
            }
        }

       
        for (int i = 1; i < n; i++)
        {  
            if (a[i] != a[0])
            {
                cout<<1<<" "<<i+1<<"\n";
            }
            else
            {
                cout<<second+1<<" "<<i+1<<"\n";
            }
                
        }

       
           
       
    }
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}




#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>>dfs(int n,int node,int par,vector<int>&vis,vector<int>&arr,vector<vector<int>>&ans){
    vis[node]=1;
    for(int i=1;i<=n;i++){
      if(i!=par && vis[i]==0){
        // if(mp[i]!=mp[node]){
        if(arr[i]!=arr[node]){
        ans.push_back({node,i});
        dfs(n,i,node,vis,arr,ans);
        }
      }
    
      
    }
    return ans;
}
int32_t main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    //unordered_map<int,int>mp;
    vector<int>arr(n+2);
    for(int i=0;i<n;i++){
      int c;
      cin>>c;
      //mp[i+1]=c;
      arr[i+1]=c;
    }
    vector<vector<int>>ans;
    vector<int>vis(n+1,0);
    dfs(n,1,-1,vis,arr,ans);
    if(ans.size()!=n-1)cout<<"NO"<<endl;
    else{
      cout<<"YES"<<endl;
    for(auto x:ans){
      cout<<x[0]<<" "<<x[1]<<endl;
    }
    cout<<endl;
    }
    
  }
	return 0;

}