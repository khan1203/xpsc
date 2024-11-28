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

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()
#define mid(l, r) ((r + l) / 2)
#define left(node) (node * 2)
#define right(node) (node * 2 + 1)
#define mx_int_prime 999999937
#define yes (cout << "YES\n")
#define no (cout << "NO\n")

const double PI = (2.0 * acos(0.0));
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define sqr(a) ((a) * (a))

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define file()                        \
    freopen("inputf.in", "r", stdin); \
    freopen("outpuft.out", "w", stdout);

int main()
{
    optimize();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        vector<int> A(n);
        vector<int> B(n);

        int maxA = INT_MIN, idxA;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            if (A[i] > maxA)
            {
                maxA = A[i];
                idxA = i;
            }
        }

        int maxB = INT_MIN, idxB;
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
            if (B[i] > maxB)
            {
                maxB = B[i];
                idxB = i;
            }
        }

        int Ax, Bx, deleteIdx;
        if (maxA > maxB)
        {
            Ax = maxA;
            deleteIdx = idxA;
        }
        else
        {
            Ax = maxB;
            deleteIdx = idxB;
        }

        A[deleteIdx] = 0;
        B[deleteIdx] = 0;

        int mx = INT_MIN, idx;
        for (int i = 0; i < n; i++)
        {
            if (A[i] > mx)
            {
                mx = A[i];
                idx = i;
            }
        }

        Bx = max(A[idx], B[idx]);

        if (Ax > Bx)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}