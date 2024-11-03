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

    list<string> names;
    unordered_map<string, list<string>::iterator> name_map;

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        string str;
        cin >> str;

        if (name_map.find(str) != name_map.end())
        {
            names.erase(name_map[str]);
        }
        names.push_front(str);
        name_map[str] = names.begin();
    }

    for (const auto &rec : names)
    {
        cout << rec << "\n";
    }

    return 0;
}
