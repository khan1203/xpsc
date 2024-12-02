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

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;

int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

template <typename F, typename S>
ostream &operator<<(ostream &os, const pair<F, S> &p)
{
    return os << "(" << p.first << ", " << p.second << ")";
}

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << "{";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "}";
}

template <typename T>
ostream &operator<<(ostream &os, const set<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename T>
ostream &operator<<(ostream &os, const multiset<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename F, typename S>
ostream &operator<<(ostream &os, const map<F, S> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << it->first << " = " << it->second;
    }
    return os << "]";
}

#define dbg(args...)            \
    do                          \
    {                           \
        cerr << #args << " : "; \
        faltu(args);            \
    } while (0)

void faltu()
{
    cerr << endl;
}

template <typename T>
void faltu(T a[], int n)
{
    for (int i = 0; i < n; ++i)
        cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename... hello>
void faltu(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}

char compareSize(char s1, char s2, int len1, int len2)
{
    dbg(len1, len2);
    if (s1 == 'S' && (s2 == 'M' || s2 == 'L'))
        return '<';
    else if (s1 == 'M' && s2 == 'L')
        return '<';
    else if (s1 == 'M' && s2 == 'S')
        return '>';
    else if (s1 == 'L' && (s2 == 'S' || s2 == 'M'))
        return '>';
    else if (s1 == s2)
    {
        if (len1 > len2 && s1 == 'S')
            return '<';
        else if (len1 < len2 && s1 == 'S')
            return '>';
        else if (len1 < len2 && s1 == 'L')
            return '<';
        else if (len1 > len2 && s1 == 'L')
            return '>';
        else
            return '=';
    }
}

pair<int, char> slitStr(string s)
{
    int len = s.size();

    char ch = s[len - 1];

    int numX = len - 1;

    return {numX, ch};
}

int main()
{
    optimize();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        int len1 = s1.size();
        int len2 = s2.size();

        cout << compareSize(s1[len1 - 1], s2[len2 - 1], len1, len2) << "\n";
    }

    return 0;
}

// if (s1[len1 - 1] < s2[len2 - 1])
// {
//     cout << "<\n";
// }
// else if (s1[len1 - 1] > s2[len2 - 1])
// {
//     cout << ">\n";
// }
// else if (s1[len1 - 1] == s2[len2 - 1])
// {
//     if (len1 > len2)
//     {
//         cout << ">\n";
//     }
//     else if (len1 < len2)
//     {
//         cout << "<\n";
//     }
//     else
//     {
//         cout << "=\n";
//     }
// }