#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
  int t;
  cin>>t;
  while(t--){
    int n,x,y;
    cin>>n>>x>>y;
    // no of numbers(indices) in permutation which are divisble by x
    int X=n/x;
    // no of numbers(indices) in permutation which are divisble by y
    int Y=n/y;
    int LCM=(x*y)/__gcd(x,y);
    // no of numbers(indices) in permutation which are divisble by both x and y
    int z=n/LCM;
    // z = no of numbers(indices) which are divisible by both so we will simply put irrelevant numbers(middle/intermediate numbers)
    X-=z;
    Y-=z;
    int sum=0;
    int a=(n*(n+1))/2;  // total sum
    int b=n-X; // for calculation of (sub) part... here we will place 1,2,3,4.... lesser numbers
    int c=(b*(b+1))/2;
    sum+=(a-c);
    sum-=(Y*(Y+1))/2;
  cout<<sum<<endl;
  }
  
  return 0;
}