// by Khan Muhammad Rifat (CSE, BUBT)
// https://atcoder.jp/contests/abc191/tasks/abc191_b

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
        int n, x;
        cin >> n >> x;

        list<int> arr;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;

            if (val != x)
            {
                arr.push_back(val);
            }
        }

        for (auto val : arr)
        {
            cout << val << " ";
        }
    }
    return 0;
}