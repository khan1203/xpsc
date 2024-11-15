#include <iostream>
#include <string>
using namespace std;

string solve(const string &S, const string &T)
{
    int n = S.size();
    int m = T.size();
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (S[i] == T[j])
        {
            // If characters match, move to the next characters in both strings
            i++;
            j++;
        }
        else if (S[i] == 'a' && j + 1 < m && T[j] == 'a' && T[j + 1] == 'b')
        {
            // If S has 'a' and T has 'ab', expand 'a' in S to 'ab'
            i++;
            j += 2;
        }
        else
        {
            // If there's any other mismatch, return "No"
            return "No";
        }
    }

    // Ensure both strings are fully traversed
    if (i == n && j == m)
        return "Yes";

    // Handle trailing 'a's in S or unmatched 'ab' in T
    while (i < n && S[i] == 'a')
        i++; // S can still have trailing 'a's
    while (j < m && T[j] == 'a' && j + 1 < m && T[j + 1] == 'b')
        j += 2; // T can have trailing 'ab's

    if (i == n && j == m)
        return "Yes";

    return "No";
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int m, n;
        cin >> m >> n;

        string S, T;
        cin >> S >> T;

        cout << solve(S, T) << "\n";
    }

    return 0;
}
