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
    // cin >> tc;
    while (tc--)
    {
        int a, b, ans;
        cin >> a >> b;

        if (b < a)
        {
            cout << 0 << "\n";
            return 0;
        }

        ans = b - a + 1;
        cout << ans << "\n";
    }
    return 0;
}