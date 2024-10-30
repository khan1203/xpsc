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
        map<pair<string, string>, bool> mp;
        for (int i = 0; i < n; i++)
        {
            string s1, s2;
            cin >> s1 >> s2;
            mp[{s1, s2}] = true;
        }

        // for (auto value : mp)
        // {
        //     cout << value.first.first << ' ' << value.first.second << "\n";
        // }

        cout << mp.size() << "\n";
    }
    return 0;
}