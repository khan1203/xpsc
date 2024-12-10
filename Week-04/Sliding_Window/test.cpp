#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define yes (cout << "YES\n")
#define no (cout << "NO\n")

int main()
{
    optimize();
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        ll sum = 0;

        vector<ll> valF(n), valC(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            valF[i] = floor((double)a[i] / k);
            valC[i] = ceil((double)a[i] / k);
            sum += valF[i];
        }

        // Sort indices based on the difference between valC[i] and valF[i]
        vector<pair<ll, ll>> diff;
        for (ll i = 0; i < n; i++)
        {
            diff.push_back({valC[i] - valF[i], i});
        }
        sort(diff.rbegin(), diff.rend()); // Sort in descending order of difference

        for (auto &d : diff)
        {
            ll i = d.second;
            ll change = valC[i] - valF[i];

            if (sum > 0 && change > 0)
            {
                ll adjust = min(sum, change);
                sum -= adjust;
            }
            else if (sum < 0 && change > 0)
            {
                ll adjust = min(-sum, change);
                sum += adjust;
            }
        }

        if (sum == 0)
            yes;
        else
            no;
    }

    return 0;
}
