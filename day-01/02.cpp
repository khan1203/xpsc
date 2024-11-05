// by Khan Muhammad Rifat (CSE, BUBT)
// https://atcoder.jp/contests/abc172/tasks/abc172_b

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
        string s, t;
        int cnt = 0;

        cin >> s >> t;

        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
                cnt++;
        }

        cout << cnt << "\n";
    }
    return 0;
}