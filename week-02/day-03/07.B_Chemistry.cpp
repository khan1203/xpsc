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
        int n, x;
        string str;
        cin >> n >> x >> str;

        vector<int> freq(26, 0);

        for (int i = 0; i < n; i++)
        {
            int ch = str[i] - 'a';
            freq[ch]++;
        }

        int odd_cnt = 0;
        for (auto v : freq)
        {
            if (v % 2 != 0)
            {
                odd_cnt++;
            }
        }

        if (odd_cnt - x > 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}