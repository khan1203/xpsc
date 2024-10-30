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

        map<string, string> ans, dup;

        for (int i = 1; i <= n; i++)
        {
            string s1, s2;
            cin >> s1 >> s2;

            if (dup.find(s1) != dup.end())
            {
                // string s = dup[s1];
                ans[dup[s1]] = s2;
                dup[s2] = dup[s1];
                dup.erase(s1);
            }
            else
            {
                ans[s1] = s2;
                dup[s2] = s1;
            }
        }
        cout << ans.size() << "\n";

        for (auto v : ans)
        {
            cout << v.first << " " << v.second << "\n";
        }
    }
    return 0;
}