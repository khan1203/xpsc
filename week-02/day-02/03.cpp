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
        int n, x, cnt = 0;
        cin >> n >> x;

        vector<int> a(n);
        vector<int> b(n);
        vector<int> c;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                int gap = b[i] - a[i];
                c.push_back(gap + 1);
            }
            else if (a[i] == b[i])
            {
                c.push_back(1);
            }
            else
            {
                cnt++;
            }
        }

        sort(c.begin(), c.end());

        if (!c.empty())
        {
            int i = 0;
            while (i < c.size() && x >= c[i])
            {
                x -= c[i];
                cnt++;
                i++;
            }
        }

        if (cnt > (n / 2))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
