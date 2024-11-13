#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxItems(int N, const vector<int> &B)
{
    vector<int> i0, i1;

    for (int i = 0; i < N; ++i)
    {
        if (B[i] == 0)
        {
            i0.push_back(i + 1);
        }
        else
        {
            i1.push_back(i + 1);
        }
    }

    sort(i1.begin(), i1.end(), greater<int>());

    sort(i0.begin(), i0.end());

    vector<int> final;
    final.insert(final.end(), i1.begin(), i1.end());
    final.insert(final.end(), i0.begin(), i0.end());

    int totalItems = 0;
    vector<int> purchased;

    for (int i = 0; i < N; ++i)
    {
        int currI = final[i];
        bool getTwoCopies = false;

        if (B[currI - 1] == 1)
        {
            for (int prevI : purchased)
            {
                if (prevI > currI)
                {
                    getTwoCopies = true;
                    break;
                }
            }
        }
        else
        {
            for (int prevI : purchased)
            {
                if (prevI < currI)
                {
                    getTwoCopies = true;
                    break;
                }
            }
        }

        totalItems += getTwoCopies ? 2 : 1;
        purchased.push_back(currI);
    }

    return totalItems;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int N;
        cin >> N;

        vector<int> B(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> B[i];
        }

        int result = maxItems(N, B);
        cout << result << endl;
    }

    return 0;
}
