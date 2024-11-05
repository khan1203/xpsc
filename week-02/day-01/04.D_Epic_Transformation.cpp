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
        int n, cnt = 0;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            cnt++;
        }

        // auto it1 = v.begin();
        // auto it2 = v.rbegin();

        int i, j;
        for (i = 0, j = n - 1; i < j;)
        {
            if (v[i] != v[j])
            {
                i++;
                j--;
            }
            else
                break;
        }

        if (i < j)
            cout << j - i << "\n";
        else
            cout << 0 << "\n";
    }
    return 0;
}