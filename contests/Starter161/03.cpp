#include <bits/stdc++.h>
using namespace std;

// Function to check if a given max unsavoriness is achievable with at most K changes
bool canAchieveUnsavoriness(const vector<int> &A, int N, int K, int maxUnsavoriness)
{
    vector<set<int>> dp(N);

    // Initialize the first step with valid temperatures
    for (int temp = A[0] - maxUnsavoriness; temp <= A[0] + maxUnsavoriness; ++temp)
    {
        dp[0].insert(temp);
    }

    for (int i = 1; i < N; ++i)
    {
        for (int temp = A[i] - maxUnsavoriness; temp <= A[i] + maxUnsavoriness; ++temp)
        {
            if (temp < 0)
                continue; // Skip negative temperatures

            // Check if temp can be reached from any valid previous temperature
            for (int prevTemp : dp[i - 1])
            {
                if (dp[i].size() > K)
                    break; // Optimization: stop if we exceed K transitions
                if (abs(temp - prevTemp) <= 1)
                { // No more than 1 step
                    dp[i].insert(temp);
                }
            }
        }
        if (dp[i].empty())
            return false; // No valid temperature for this step
    }

    return dp[N - 1].size() <= K; // Check if the last step has ≤ K transitions
}

// Main function to find the minimum possible unsavoriness
int minimizeUnsavoriness(int T, vector<tuple<int, int, vector<int>>> &testCases)
{
    vector<int> results;

    for (auto &testCase : testCases)
    {
        int N, K;
        vector<int> A;
        tie(N, K, A) = testCase;

        int low = 0, high = *max_element(A.begin(), A.end()) - *min_element(A.begin(), A.end());
        int answer = high;

        // Binary search for the smallest maximum unsavoriness
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (canAchieveUnsavoriness(A, N, K, mid))
            {
                answer = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        results.push_back(answer);
    }

    // Print all results
    for (int res : results)
    {
        cout << res << endl;
    }

    return 0;
}

int main()
{
    int T;
    cin >> T;
    vector<tuple<int, int, vector<int>>> testCases;

    for (int t = 0; t < T; ++t)
    {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }
        testCases.emplace_back(N, K, A);
    }

    minimizeUnsavoriness(T, testCases);
    return 0;
}
