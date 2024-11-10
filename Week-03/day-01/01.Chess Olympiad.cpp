#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int x, y, z, a, b;
    cin >> x >> y >> z;

    a += x;
    b += z;

    int restRound = 4 - (x + y + z);
    a += restRound;

    if (a > b)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}
