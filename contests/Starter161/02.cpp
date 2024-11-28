#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, c, cnt = 0;
        cin >> n >> c;

        vector<int> donuts(n);

        for (int i = 1; i <= n; i++)
        {
            cin >> donuts[i];
        }

        for (int i = 0; i < c; i++)
        {
            int b;
            cin >> b;

            if (donuts[b] > 0)
            {
                donuts[b]--;
            }
            else
            {
                cnt++;
            }
        }

        cout << cnt << "\n";
    }
}
