#pragma GCC optimize("Ofast,unroll-loops") 
//#pragma GCC target("avx,popcnt")

// I/O and string
#include <iostream>
#include <iomanip>   // fixed, setprecision
#include <sstream>
#include <string>

// Math
#include <cmath>     // sqrt, pow, log, sin, cos
#include <cstdlib>   // abs, rand, srand
#include <climits>   // INT_MAX, INT_MIN
#include <algorithm> // sort, min, max, reverse, binary_search
#include <numeric>   // accumulate, gcd, lcm

// Datatypes and Data structure
#include <vector>
#include <array>
#include <deque>
#include <queue>     // priority_queue, queue
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <bitset>

// Time
#include <chrono>

// Other
#include <cassert>   // assert
#include <tuple>     // tuple, make_tuple
#include <functional> // function, greater
#include <utility>   // pair, make_pair

using namespace std;

/* TYPES  */
#define ll long long
#define ull unsigned long long
#define arr(x, y) array<x, y>
#define arr2(x, y, z) array<array<x, y>, z>
#define int128 __uint128_t
#define p(x, y) pair<x, y>
#define m(x, y) map<x, y>
#define um(x, y) unordered_map<x, y>
#define s(x) set<x>
#define us(x) unordered_set<x>
#define q(x) queue<x>
#define dq(x) deque<x>
#define st(x) stack<x>
#define pq(x) priority_queue<x>
#define v(x) vector<x>
#define v2(x) vector<vector<x>>

/* FUNCTIONS */
#define f(i,s,e) for(int i=(int)s;i<e;i++)
#define f2(i,s,e) for(int i=(int)s;i<=e;i++)
#define f3(i,e,s) for(int i=(int)e-1;i>=s;i--)
#define fe(x, a) for(auto x : a)
#define pb push_back
#define eb emplace_back
#define nl "\n"
#define el cout << "\n";
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define elif else if
#define fi(a) cout<<fixed<<setprecision(a)
#define fast cin.tie(nullptr) -> sync_with_stdio(false);
#define tc int t; cin >> t; while(t--)
#define Beater int main()

/* PRINTS */
template <class T, auto S>
std::ostream& operator<<(std::ostream& os, const std::array<T, S>& v) {
    for (auto i : v) os << i << ' '; return os;
}
template <class T, auto S, auto V>
std::ostream& operator<<(std::ostream& os, const std::array<std::array<T, S>, V>& v) {
    for (auto i : v) {for (auto j : i) os << j << " "; os << "\n";} return os;
}
template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v) {
    for (auto i : v) os << i << ' '; return os;
}
template <class T>
std::ostream& operator<<(std::ostream& os, const std::set<T>& v) {
    for (auto i : v) os << i << ' '; return os;
}
template <class T, class S>
std::ostream& operator<<(std::ostream& os, const std::map<T, S>& v) {
    for (auto i : v) os << i.first << " " << i.second << "\n"; return os;
}
template <class T, class S>
std::ostream& operator<<(std::ostream& os, const std::pair<T, S>& v) {
    os << v.first << " " << v.second << "\n"; return os;
}
template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<std::vector<T>>& v) {
    for (auto i : v) {for (auto j : i) os << j << " "; os << "\n";} return os;
}

/* UTILS */
#define MOD 1000000007
#define MAXN 10000001
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

Beater{
    fast
    #ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    return 0;
}