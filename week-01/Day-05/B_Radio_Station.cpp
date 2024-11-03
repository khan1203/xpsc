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
        int n, m;
        cin >> n >> m;

        map<string, string> mp;

        while (n--)
        {
            string svr, ip1;
            cin >> svr >> ip1;

            mp[ip1] = svr;
        }

        while (m--)
        {
            string cmd, ip2;
            cin >> cmd >> ip2;

            ip2.pop_back();
            cout << cmd << " " << ip2 << ";" << " " << "#" << mp[ip2] << "\n";
        }
    }
    return 0;
}