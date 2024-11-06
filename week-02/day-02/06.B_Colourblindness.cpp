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

bool solve(int n)
{
    string str1, str2;
    cin >> str1 >> str2;

    for (int i = 0; i < n; i++)
    {
        if (str1[i] != str2[i])
        {
            if (str1[i] == 'R' || str2[i] == 'R')
            {
                // cout << "NO\n";
                return false;
            }
        }
    }

    return true;
}

int main()
{
    optimize();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        if (!solve(n))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}