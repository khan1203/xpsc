// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        long long sum = 0;
        int cnt = 0;
        bool open = false;

        for (int x : a)
        {
            sum += abs(x);
            if (x < 0 && !open)
            {
                open = true;
                cnt++;
            }
            if (x > 0)
            {
                open = false;
            }
        }

        cout << sum << " " << cnt << endl;
    }

    return 0;
}
