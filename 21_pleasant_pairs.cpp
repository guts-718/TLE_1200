// product and sum are there -- little bit logic of sieve and number theory logic is there
#include <bits/stdc++.h>
typedef long long int ll;
 int MOD = 1e9+7;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n;
        cin >> n;
        ll a[n+1];

        for (int i = 1; i < n+1; i++)
        {
            cin>>a[i];
        }
        
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = a[i] - i; j <= n; j += a[i])
            {
                if (j >= 0)
                    if (a[i] * a[j] == i + j && i < j)
                        ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}