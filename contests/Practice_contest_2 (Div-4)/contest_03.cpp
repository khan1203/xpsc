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
        int n;
        cin >> n;

        if (n >= 1 && n < 2)
        {
            cout << 0 << "\n";
        }
        else if (n >= 2 && n < 9)
        {
            cout << 1 << "\n";
        }
        else
        {
            int ans = ceil((n - 2) / 7);
            cout << ans + 1 << "\n";
        }
    }
    return 0;
}