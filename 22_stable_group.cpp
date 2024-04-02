#include<bits/stdc++.h>
using namespace std;

#define timesave ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

main() {
    timesave;
    ll n, k, x;
    cin >> n >> k >> x;
    ll ar[n + 5];
    for (ll i = 0; i < n; i++) {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    vector<pair<ll, ll>> vec;
    ll currentStart = ar[0], currentEnd = ar[0];
    for (ll i = 1; i < n; i++) {
        if (ar[i] - ar[i - 1] > x) {
            vec.push_back({currentStart, currentEnd});
            currentStart = ar[i];
            currentEnd = ar[i];
        } else {
            currentEnd = ar[i];
        }
    }
    vec.push_back({currentStart, currentEnd});
    ll ans = vec.size();
    vector<ll> diff;
    for (ll i = 1; i < vec.size(); i++) {
        ll suru = vec[i].first;
        ll sesh = vec[i - 1].second;
        diff.push_back(abs(suru - sesh));
    }
    sort(diff.begin(), diff.end());
    ll lagbe = x * 2;
    for (ll i = 0; i < diff.size(); i++) {
        if (k > 0) {
            diff[i] = (diff[i] - 1) / x;
            if (k >= diff[i]) {
                ans--;
                k -= diff[i];
            }
        }
    }
    cout << ans << endl;
}
