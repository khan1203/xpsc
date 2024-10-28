
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
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int p = 0, i = 1, n;
        cin >> n;

        while (p <= n && p >= -n)
        {
            if (i % 2 != 0)
            {
                p -= (2 * i - 1);
                i++;
            }
            else
            {
                p += (2 * i - 1);
                i++;
            }
        }

        if (i % 2 != 0)
            cout << "Kosuke" << "\n";
        else
            cout << "Sakurako" << "\n";
    }
    return 0;
}
