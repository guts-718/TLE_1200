// this is a very common way to deal with addition and subtraction involving modulus...
// what we do is we sort the array and now all the elements to the left are smaller and all the element to the right are larger
// to find the |ai-ax| -> we will do 
// prefix sum before current index = s1 no of previous elements= n1
// suffix sum = s2 and suffix number count=n2
// then ans = (n1*curr-s1)+(s2-n2*curr)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define int long long

void solve();

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> a(n, vector<int>(m));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    int ans = 0;
    
    for (int i = 0; i < m; i++) {
        vector<int> temp;
        int sum = 0;
        
        for (int j = 0; j < n; j++) {
            temp.push_back(a[j][i]);
            sum += a[j][i];
        }
        
        int curr = 0;
        sort(temp.begin(), temp.end());
        
        for (int j = 0; j < n; j++) {
            curr += temp[j];
            ans += abs((sum - curr) - (n - 1 - j) * temp[j]);
        }
    }
    
    cout << ans << "\n";
}
