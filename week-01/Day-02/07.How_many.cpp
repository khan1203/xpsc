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

int countValidTriples(int S, int T)
{
    int cnt = 0;
    for (int a = 0; a <= S; ++a)
    {
        for (int b = 0; b <= S - a; ++b)
        {
            for (int c = 0; c <= S - a - b; ++c)
            {
                if (a * b * c <= T)
                {
                    cnt++;
                }
            }
        }
    }
    return cnt;
}

int main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int S, T;
        cin >> S >> T;
        cout << countValidTriples(S, T) << "\n";
    }
    return 0;
}