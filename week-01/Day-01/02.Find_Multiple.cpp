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
        int a, b, c, i = 1;
        cin >> a >> b >> c;

        while (1)
        {

            if (c * i <= b && c * i >= a)
            {
                cout << c * i << "\n";
                return 0;
            }
            else if (c * i > b)
            {
                cout << -1 << "\n";
                return 0;
            }

            i++;
        }
    }
    return 0;
}