// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define PI 2 * acos(0.0)
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main()
{
    optimize();
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        string str;
        cin >> n >> str;

        set<char> s1(str.begin(), str.end());
        vector<char> v(s1.begin(), s1.end());
        map<char, char> mp;

        int len = v.size();
        for (int i = 0, j = len - 1; i <= j; ++i, --j)
        {
            mp[v[i]] = v[j];
            mp[v[j]] = v[i];
        }

        for (char ch : str)
            cout << mp[ch];

        cout << nl;
    }
    return 0;
}
