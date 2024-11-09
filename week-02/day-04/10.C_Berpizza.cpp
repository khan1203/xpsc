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
    int n, customerNo = 1;
    cin >> n;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int m;
            cin >> m;
            s.insert({customerNo, m});
            ml.insert({m, -customerNo});
            customerNo++;
        }
        else if (op == 2)
        {
            int pos = s.begin()->first;
            int m = s.begin()->second;

            ans.push_back(pos);

            s.erase(s.begin());
            ml.erase({m, -pos});
        }
        else
        {
            int pos = -ml.rbegin()->second;
            int m = ml.rbegin()->first;

            ans.push_back(pos);

            ml.erase(--ml.end());
            s.erase({pos, m});
        }
    }

    for (auto val : ans)
    {
        cout << val << " ";
    }
    cout << '\n';

    return 0;
}