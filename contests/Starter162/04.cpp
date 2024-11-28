// by Khan Muhammad Rifat (CSE, BUBT)

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
vector<int> goodPermutation(int N, int K)
{
    if (K == 1)
    {
        return {-1};
    }

    vector<int> P(N);
    for (int i = 0; i < N; ++i)
    {
        P[i] = i + 1;
    }

    for (int i = 0; i < N; i += K)
    {
        int groupSize = min(K, N - i);
        vector<int> group(P.begin() + i, P.begin() + i + groupSize);

        for (int j = 0; j < groupSize; ++j)
        {
            P[i + j] = group[(j + 1) % groupSize];
        }
    }

    return P;
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int N, K;
        cin >> N >> K;

        vector<int> result = goodPermutation(N, K);
        if (result.size() == 1 && result[0] == -1)
        {
            cout << -1 << '\n';
        }
        else
        {
            for (int x : result)
            {
                cout << x << " ";
            }
            cout << '\n';
        }
    }

    return 0;
}
