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
        int n;
        cin >> n;

        if (n == 0)
        {
            cout << "0000" << "\n";
            return 0;
        }
        string str1, str2;
        str2 = to_string(n);
        int num0 = 4 - str2.size();

        while (num0--)
        {
            str1 += '0';
        }

        cout << str1 + str2 << "\n";
    }
    return 0;
}

// Shortcut--------------------------------------
int main()
{
    int N;
    cin >> N;

    cout << setw(4) << setfill('0') << N << endl;

    return 0;
}