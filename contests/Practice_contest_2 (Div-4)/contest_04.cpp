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

pair<int, int> game(string s1, string s2, int n)
{
    int p1 = 0, p2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == 'R' && s2[i] == 'P')
        {
            p2++;
        }
        else if (s1[i] == 'R' && s2[i] == 'S')
        {
            p1++;
        }
        else if (s1[i] == 'P' && s2[i] == 'R')
        {
            p1++;
        }
        else if (s1[i] == 'P' && s2[i] == 'S')
        {
            p2++;
        }
        else if (s1[i] == 'S' && s2[i] == 'P')
        {
            p1++;
        }
        else if (s1[i] == 'S' && s2[i] == 'R')
        {
            p2++;
        }
        // else if (s1[i]=='R' && s2[i]=='P'){}
        // else if (s1[i]=='R' && s2[i]=='P'){}
    }

    return {p1, p2};
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

        string c, op;
        cin >> c >> op;

        pair<int, int> pr = game(c, op, n);

        if (pr.first > pr.second)
            cout << 0 << "\n";
        else if (pr.first == pr.second)
            cout << 2 << "\n";
        else
            cout << (pr.second - pr.first) << "\n";
    }
    return 0;
}