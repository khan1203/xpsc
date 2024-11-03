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
        string str;
        cin >> str;

        int cnt = 2, idx = -1;
        char ch = str[0];
        for (int i = 1; i < str.size(); i++)
        {
            if (str[i] == str[i - 1])
            {
                cnt++;
                idx = i;
                ch = str[i];
            }

            cnt += 2;
        }

        if (idx != -1)
        {
            if (ch == 'z')
                str.insert(idx, 1, ch - 1);
            else
                str.insert(idx, 1, ch + 1);
        }
        else
        {
            if (ch == 'z')
                str.insert(0, 1, ch - 1);
            else
                str.insert(0, 1, ch + 1);
        }

        cout << str << "\n";
    }
    return 0;
}