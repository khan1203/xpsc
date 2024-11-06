#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> freq;

        // Read the array and count frequencies of each element
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        // Count the number of elements with odd frequencies
        int odd_count = 0;
        for (auto &p : freq)
        {
            if (p.second % 2 != 0)
            {
                odd_count++;
            }
        }

        // Minimum possible size of the array after operations
        int result = (odd_count % 2 == 0) ? 0 : 1;
        cout << result << endl;
    }
    return 0;
}
