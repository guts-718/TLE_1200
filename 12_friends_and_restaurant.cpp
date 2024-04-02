// optimal will be the one where we have pairs of 2.. and we will not want to waste people who have more money then what they spend
// so what we do is we store the extra money each person have (<0 money if he has less money than what he is going to spend)
// then we will sort them --> -7 -3 -1 2 4 5 (here we wont pick -7 as it is disadvantageous we will have to waste a lot of positive value)
// so what we do is we stay at the right most element until the left pointer's value can be accomodated by it



#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
		int n ; cin >> n ;
		vector<int> x(n), y(n);
		for(auto &_x: x) cin >> _x;
		for(auto &_x: y) cin >> _x;

		vector<int> v;

		for(int i = 0 ; i< n; i++){
			v.push_back(y[i] - x[i]) ;
		}

		sort(v.begin() , v.end()) ;

		int cnt = 0 ;

		int st = 0 , en = n - 1;
		while(st < en){
			if(v[st] + v[en] >= 0){
				++ cnt ;
				en--;
			}
			st ++;
		}

		cout << cnt << endl;
    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    cin >> testcases ;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}




#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0)
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];
    for (int i = 0; i < n; i++)
        cin >> y[i];
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        if (x[i] > y[i])
        {
            a.push_back((x[i] - y[i]));
        }
        else
        {
            b.push_back((y[i] - x[i]));
        }
    }
    int ans = 0, leftover = 0;
    if (b.size() != 0)
        leftover = b.size();
    if (a.size() != 0)
        sort(a.rbegin(), a.rend());
    if (b.size() != 0)
        sort(b.begin(), b.end());
    int i = 0, j = (b.size() - 1);
    while (i < a.size() && j >= 0)
    {
        if (a[i] <= b[j])
        {
            leftover--;
            ans++;
            j--;
            i++;
        }
        else
        {
            i++;
        }
    }
    ans += (leftover / 2);
    cout << ans << endl;
}
int main()
{
    fast;
    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
}