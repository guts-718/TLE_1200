// whenever see something like this:  aj−ai = j−i simply rearrange 

#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	  int n;
	  cin>>n;
	  vector<int>arr;
	  unordered_map<int,int>mp;
	  for(int i=0;i<n;i++){
	    int x;
	    cin>>x;
	    mp[x-i-1]++;
	    
	  }
	  int ans=0;
	  for(auto it=mp.begin();it!=mp.end();it++){
	    int t=it->second;
	    ans+=(t*(t-1))/2;
	  }
	  cout<<ans<<endl;
	}
	return 0;

}