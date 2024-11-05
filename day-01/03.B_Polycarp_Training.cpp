// https://codeforces.com/problemset/problem/1165/B

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
        int n, x = 1;
        cin >> n;

        list<int> arr;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            arr.push_back(num);
        }

        arr.sort();

        for (auto it = arr.begin(); it != arr.end();)
        {
            if (*it >= x)
            {
                // arr.remove(*it);
                it = arr.erase(it);
                x++;
            }
            else
            {
                it++;
            }
        }

        cout << x - 1 << "\n";
    }
    return 0;
}