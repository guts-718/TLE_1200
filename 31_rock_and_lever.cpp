// the only logic used here is that (a&b)>=(a^b) can only happen if the MSB of a and b are same --> for rest of the
// cases XOR will always be bigger

#include <bits/stdc++.h>
using namespace std;
//program to convert an integer into binary string
string dec2bin(unsigned n){
    const int size=sizeof(n)*8;
    std::string res;
    bool s=0;
    for (int a=0;a<size;a++){
        bool bit=n>>(size-1);
        if (bit)
            s=1;
        if (s)
            res.push_back(bit+'0');
        n<<=1;
    }
    if (!res.size())
        res.push_back('0');
    return res;
}
int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
       int n;
       cin>>n;
       string s=dec2bin(n);
       //string s=bitset<64>(n).to_string();
       //string s=to_string(n);
       mp[s.length()]++;
    }
    int ans=0;
    for(auto it=mp.begin();it!=mp.end();it++){
      int k=it->second;
      ans+=(k*(k-1))/2;
    }
    cout<<ans<<endl;
  }
	return 0;

}