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
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, x;
        cin >> n >> x;

        int even_count = n / 2;
        int odd_count = n - even_count;

        int ans;
        if (x % 2 == 0)
        {
            ans = even_count - 1;
        }
        else
        {
            ans = odd_count - 1;
        }

        cout << ans << "\n";
    }

    return 0;
}
