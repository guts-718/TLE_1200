// there are only three possible cases 
    // 1. either all are deleted from left
    // 2. or all deleted from right
    // 3. or from both side
// i also tried to solve it using sliding window by trying to find the longest sub_array with sum=s but due to edge cases couldn't
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	  int n,s;
	  cin>>n>>s;
	  vector<int>arr;
	  unordered_map<int,int>m1,m2;
	  int k=0;
	  for(int i=0;i<n;i++){
	    int x;
	    cin>>x;
	    arr.push_back(x);
	    k+=x;
	  }
	  if(k<s)cout<<-1<<endl;
	  else if(k==s)cout<<0<<endl;
	  else{
	    int sum=0;
	    for(int i=0;i<n;i++){
	      sum+=arr[i];
	      if(m1.find(sum)==m1.end() && sum>0)m1[sum]=i+1;
	      
	    }
	    sum=0;
	    int j=1;
	    for(int i=n-1;i>=0;i--){
	      sum+=arr[i];
	      if(m2.find(sum)==m2.end() && sum>0)m2[sum]=j;
	      j++;
	      
	    }
	    
	    int ans=min(m1[k-s],m2[k-s]);
	    for(auto it=m1.begin();it!=m1.end();it++){
	      ans=min(ans,it->second+m2[k-s-it->first]);
	    }
	    cout<<ans<<endl;
	  }
	  
	}
	return 0;

}