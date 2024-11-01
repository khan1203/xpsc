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

void solveOptimized()
{
    string str;
    cin >> str;
    int chk_low = 0, chk_up = 0;
    deque<char> dq;
    for (int i = str.size() - 1; i >= 0; i--)
    {
        if (str[i] == 'B')
        {
            chk_up++;
            continue;
        }
        if (str[i] == 'b')
        {
            chk_low++;
            continue;
        }
        if (chk_low and islower(str[i]))
        {
            chk_low--;
            continue;
        }
        if (chk_up and isupper(str[i]))
        {
            chk_up--;
            continue;
        }
        dq.push_front(str[i]);
    }
    for (auto &it : dq)
        cout << it;
    cout << endl;
}

void solve()
{
    string str;
    cin >> str;

    stack<pair<int, char>> a, b;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'b')
        {
            if (!a.empty())
            {
                a.pop();
            }
        }
        else if (str[i] == 'B')
        {
            if (!b.empty())
            {
                b.pop();
            }
        }
        else
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                a.push({i, str[i]});
            }
            else if (str[i] >= 'A' && str[i] <= 'Z')
            {
                b.push({i, str[i]});
            }
        }
    }

    map<int, char> mp;
    while (!a.empty())
    {
        int key = a.top().first;
        char ch = a.top().second;
        mp[key] = ch;
        a.pop();
    }
    while (!b.empty())
    {
        int key = b.top().first;
        char ch = b.top().second;
        mp[key] = ch;
        b.pop();
    }

    for (auto m : mp)
    {
        cout << m.second;
    }
    cout << "\n";
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/*
int main()
{
    optimize();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        string str;
        cin >> str;

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'B')
            {
                for (int j = i - 1; j >= 0; j--)
                {
                    if ('A' <= str[j] && str[j] <= 'Z')
                    {
                        str.erase(j, 1);
                        i--;
                        break;
                    }
                }
                str.erase(i, 1);
                i--;
            }
            else if (str[i] == 'b')
            {
                for (int j = i - 1; j >= 0; j--)
                {
                    if ('a' <= str[j] && str[j] <= 'z')
                    {
                        str.erase(j, 1);
                        i--;
                        break;
                    }
                }
                str.erase(i, 1);
                i--;
            }
        }

        cout << str << "\n";
    }

    return 0;
}
*/