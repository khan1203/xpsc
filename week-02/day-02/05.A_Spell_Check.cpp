// by Khan Muhammad Rifat (CSE, BUBT)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    if (n != 5)
    {
        cout << "NO"
             << "\n";
        return;
    }

    int arr[5] = {0};

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'T')
        {
            arr[0]++;
        }
        else if (str[i] == 'i')
        {
            arr[1]++;
        }
        else if (str[i] == 'm')
        {
            arr[2]++;
        }
        else if (str[i] == 'u')
        {
            arr[3]++;
        }
        else if (str[i] == 'r')
        {
            arr[4]++;
        }
        else
        {
            cout << "NO"
                 << "\n";
            return;
        }
    }

    int co = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            co++;
        }
    }

    if (co == 5)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}