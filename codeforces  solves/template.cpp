#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define square(n) (n)*(n)
#define cube(n) (n)*(n)*(n)
#define len(x) (int)x.size()
#define __lcm(a, b) ((a / __gcd(a, b)) * b)
#define inSet(st, num) (st.find(num) != st.end())
#define circulate(a, b) (((a % b) + b) % b)
#define setPrec(n) fixed << setprecision(n)
#define pi 2*acos(0.0)
#define nl cout << "\n";
#define bisect_left(a, b, x) (lower_bound(a, b, x) - a)
#define bisect_right(a, b, x) (upper_bound(a, b, x) - a) 
#define set_bits(n) __builtin_popcount(n)
#define inSide(l, r, m) ((m >= l) and (m <= r))
#define outSide(l, r, m) ((m < l) or (m > r))
#define scan(...) console_input(__VA_ARGS__)
#define print(...) console_output(__VA_ARGS__)
#define scanList(a) for (auto &it: a) cin >> it 
#define printList(a) for (auto &it: a) cout << it << " "; nl

template <typename K, typename V> using hashMap = __gnu_pbds::gp_hash_table<K, V>;
template <typename T> using index_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using rindex_set = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using index_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using rindex_multiset = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using rset = set <T, greater <T>>; 
template <typename T> using rmultiset = multiset <T, greater <T>>;
template <typename T> using min_heap = priority_queue<T, vector<T>, greater<T>>;
template <typename T> using max_heap = priority_queue<T>;

void console_output() {cout << '\n';}
template<typename T, typename... Args>
void console_output(T first, Args... args) {cout << first << " "; console_output(args...);}

template<typename T> 
void console_input(T& arg) {cin >> arg;}
template<typename T, typename... Args> 
void console_input(T& first, Args&... args) {cin >> first; console_input(args...);}

template <typename K, typename V>
vector < K > keys_of_map(map < K, V > &mp) {vector < K > v; for (auto &el: mp) v.pb(el.first); return v;}
template <typename K, typename V>
vector < V > values_of_map(map < K, V > &mp) {vector < V > v; for (auto &el: mp) v.pb(el.second); return v;}
int digit_sum(int n) {return (n ? (n % 10) + digit_sum(n / 10) : 0);}

vector < vector < int > > dir8 = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}, {1, 1}, {1, -1}, {-1, -1}, {-1, 1}};
vector < vector < int > > dir4 = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
set < char > vowel = {'a', 'e', 'i', 'o', 'u'};

const int N = 1e5 + 7;
vector < int > adj[N];

int color[2];

void dfs(int src, int par, int clr)
{
    color[clr] += 1;

    for (auto child: adj[src])
    {
        if (child == par) continue;
        dfs(child, src, clr ^ 1);
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL); cout.tie(NULL);
    
    int n; scan(n);

    for (int i = 0; i < n - 1; i++)
    {
        int x, y; scan(x, y);
        adj[x].pb(y);
        adj[y].pb(x);
    }

    dfs(1, -1, 1);

    print((color[0] * color[1]) - (n - 1));

    return 0;
}

