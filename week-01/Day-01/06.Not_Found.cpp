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
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        string str;
        cin >> str;

        string alpha = "abcdefghijklmnopqrstuvwxyz";
        int freq[26] = {0};

        for (int i = 0; i < str.size(); i++)
        {
            char ch = str[i];
            freq[ch - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] == 0)
            {
                cout << alpha[i] << "\n";
                return 0;
            }
        }

        cout << "None\n";
    }
    return 0;
}