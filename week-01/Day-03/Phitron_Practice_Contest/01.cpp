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
        int x, y;
        cin >> x >> y;

        if (x < y)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}