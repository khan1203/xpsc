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
    string src, des;
    cin >> src >> des;

    int srcX = src[0] - 'a';
    int srcY = src[1] - '1';
    int desX = des[0] - 'a';
    int desY = des[1] - '1';

    vector<string> path;

    while (srcX != desX || srcY != desY)
    {
        string p = "";

        if (srcX < desX)
        {
            p += "R";
            srcX++;
        }
        else if (srcX > desX)
        {
            p += "L";
            srcX--;
        }

        if (srcY < desY)
        {
            p += "U";
            srcY++;
        }
        else if (srcY > desY)
        {
            p += "D";
            srcY--;
        }

        path.push_back(p);
    }

    cout << path.size() << endl;
    for (const string &p : path)
    {
        cout << p << endl;
    }

    return 0;
}
