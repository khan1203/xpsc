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

int largestEvenSumSubarraySize(const vector<int> &A)
{
    int N = A.size();
    int totalSum = 0;

    for (int num : A)
    {
        totalSum += num;
    }

    if (totalSum % 2 == 0)
    {
        return N;
    }

    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 != 0)
        {
            return N - 1;
        }
    }

    return 0;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        int result = largestEvenSumSubarraySize(A);
        cout << result << "\n";
    }

    return 0;
}
