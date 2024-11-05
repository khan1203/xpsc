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

    map<string, int> mp;
    while (tc--)
    {
        string name;
        cin >> name;

        if (mp[name] == 0)
        {
            cout << "OK\n";
            mp[name]++;
        }
        else
        {
            string newName = name + to_string(mp[name]);
            cout << newName << "\n";
            mp[newName]++;
            mp[name]++;
        }
    }
    return 0;
}