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
        int n;
        cin >> n;

        if (n == 0)
        {
            cout << 0 << "\n";
        }

        ll arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n == 1 && arr[0] % 2 != 0)
        {
            cout << 0 << "\n";
            return 0;
        }

        sort(arr, arr + n, greater<int>());

        ll sum = 0, odd;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        if (sum % 2 == 0)
        {
            cout << sum << "\n";
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if (arr[i] % 2 != 0)
                {
                    odd = arr[i];
                    break;
                }
            }

            cout << sum - odd << "\n";
        }
    }
    return 0;
}