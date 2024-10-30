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
        int n, w;
        cin >> n >> w;

        int gain = 0, lose = 0;
        for (int i = n; i > (n - w); i--)
        {
            gain += pow(2, i);
        }
        for (int i = 1; i <= (n - w); i++)
        {
            lose += pow(2, i);
        }

        cout << gain - lose << "\n";
    }
    return 0;
}