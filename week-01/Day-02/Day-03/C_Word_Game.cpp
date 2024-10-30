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
        int n, r = 3;
        cin >> n;

        map<string, vector<int>> mp;

        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                string str;
                cin >> str;

                mp[str].push_back(i);
            }
        }

        // for (auto [x, y] : mp)
        // {
        //     cout << x << " -> ";
        //     for (auto v : y)
        //     {
        //         cout << v << " ";
        //     }
        //     cout << '\n';
        // }
        // cout << "\n";

        vector<int> ans(r + 1);

        for (auto [x, y] : mp)
        {
            if (y.size() == 1)
            {
                ans[y[0]] += 3;
            }
            else if (y.size() == 2)
            {
                ans[y[0]]++;
                ans[y[1]]++;
            }
        }

        for (int i = 1; i <= r; i++)
        {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}