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
    // cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        map<int, int> mp;
        int max = INT_MIN;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;

            if (max < mp[x])
                max = mp[x];
        }

        cout << max << "\n";
    }
    return 0;
}