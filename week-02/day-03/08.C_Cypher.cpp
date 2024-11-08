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

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            int x;
            string str;
            cin >> x >> str;

            for (int j = 0; j < x; j++)
            {
                if (str[j] == 'U')
                {
                    if (v[i] == 0)
                        v[i] = 9;
                    else
                        v[i]--;
                }
                else if (str[j] == 'D')
                {
                    if (v[i] == 9)
                        v[i] = 0;
                    else
                        v[i]++;
                }
            }
        }

        for (auto x : v)
        {
            cout << x << " ";
        }

        cout << "\n";
    }
    return 0;
}