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

        string str;
        cin >> str;

        for (int i = 0; i < n - 2; i++)
        {
            if (str.substr(i, 3) > "100")
            {
                str[i] = '1';
                str[i + 1] = '0';
                str[i + 2] = '0';
                cnt++;
            }
        }

        cout << str << "\n";
    }
    return 0;
}