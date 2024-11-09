// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define PI 2 * acos(0.0)
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main()
{
    optimize();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;

        priority_queue<ll> pq;

        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            if (x > 0)
            {
                pq.push(x);
            }
            else if (x == 0 && !pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
        }

        cout << ans << "\n";
    }
    return 0;
}