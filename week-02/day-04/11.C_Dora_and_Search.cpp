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

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int l = 0, r = n - 1;
    int min = 1, max = n;

    while (l <= r)
    {
        if (arr[l] == min)
        {
            ++l;
            ++min;
        }
        else if (arr[l] == max)
        {
            ++l;
            --max;
        }
        else if (arr[r] == min)
        {
            --r;
            ++min;
        }
        else if (arr[r] == max)
        {
            --r;
            --max;
        }
        else
        {
            cout << l + 1 << " " << r + 1 << endl;
            return;
        }
    }

    cout << "-1" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
