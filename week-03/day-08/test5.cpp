#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int tc;
    cin >> tc;
    while (tc--)
    {
        string str;
        cin >> str;

        deque<char> dq(str.begin(), str.end());

        int cnt = 0;
        while (!dq.empty())
        {
            bool erased = false;
            for (auto it = dq.begin(); it != dq.end() - 1; ++it)
            {
                if (*it != *(it + 1))
                { // Check for adjacent alternate characters
                    dq.erase(it);
                    dq.erase(it); // It now points to the next element, so erase it too
                    erased = true;
                    break; // Restart the loop to process the updated deque
                }
            }
            if (!erased)
                break; // If no adjacent pairs were erased, terminate
            cnt++;
        }

        cout << cnt << "\n";
    }

    return 0;
}
