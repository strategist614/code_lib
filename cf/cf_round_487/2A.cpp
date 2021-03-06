#include <bits/stdc++.h>
using namespace std;

#ifdef Wavator

#define Debug(...) fprintf(stderr, __VA_ARGS__);

#define De(x) cerr << #x << '=' << x << endl;

#else

#define cerr if (false) cout

#define Debug(...) 98;

#define De(x) 99;

#endif

#define REP(i, a, b) for (int i = (a); i < (b); ++i)

#define PB push_back

#define MP make_pair

#define complete_unique(x) x.resize(unique(x.begin(), x.end()) - x.begin())

#define PER(i, a, b) for (int i = (b) - 1; i >= (a); --i)

#define ALL(x) x.begin(), x.end()

#define RALL(x) x.rbegin(), x.rend()

typedef long long LL;
typedef double db;
typedef vector<int> vi;
typedef vector<LL> vl;
typedef vector<db> vd;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<db, db> pdd;

template <typename T>
inline void cma(T &a, const T & b) {
    a = max(a, b);
}

template <typename T>
inline void cmi(T &a, const T & b) {
    a = min(a, b);
}

template <typename T>
ostream & operator << (ostream &os, const vector<T> &v) {
    for (auto & x: v)
        os << x << ' ';
    return os;
}

template <typename A, typename B>
ostream & operator << (ostream &os, const pair<A, B> &in) {
    os << in.first << ' ' << in.second;
    return os;
}

int main() {
#ifdef Wavator
    freopen("test.in", "r", stdin);
#endif
    map<string, bool> mp;
    mp.insert(MP("red", 1));
    mp.insert(MP("purple", 1));
    mp.insert(MP("yellow", 1));
    mp.insert(MP("orange", 1));
    mp.insert(MP("blue", 1));
    mp.insert(MP("green", 1));
    map<string, string> s;
    s["purple"] = "Power";
    s["green"] = "Time";
    s["blue"] = "Space";
    s["orange"] = "Soul";
    s["red"] = "Reality";
    s["yellow"] = "Mind";
    int n;
    cin >> n;
    int ans = 6 - n;
    for (; n--; ) {
        string in;
        cin >> in;
        mp[in] = 0;
    }
    cout << ans << endl;
    for (auto&x: mp)
        if (x.second)
            cout << s[x.first] << endl;
    return 0;
}
