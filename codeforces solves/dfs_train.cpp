#include <bits/stdc++.h>
#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define pi 3.14159265358979323846
#define square(n) (n)*(n)
#define cube(n) (n)*(n)*(n)
#define setPrec(n) fixed << setprecision(n)
#define circulate(a, b) (((a % b) + b) % b)
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define cn continue
#define mod 1000000007
#define best INT_MAX
#define wrst INT_MIN
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;
const int MAXN = 200000;
int N, S;
int pleasant[MAXN+1];
vector<int> adj[MAXN+1];
bool visited[MAXN+1];

int dfs(int u) {
    visited[u] = true;
    int max_len = 1; 
    for (int v : adj[u]) {
        if (!visited[v] && pleasant[v] > pleasant[u]) {
            int len = 1 + dfs(v);
            if (len > max_len) max_len = len;
        }
    }
    visited[u] = false;
    return max_len;
}

signed main() {
    let_strt;
    cin >> N >> S;
    for (int i = 1; i <= N; i++) {
        cin >> pleasant[i];
    }
    for (int i = 0; i < N-1; i++) {
        int U, V;
        cin >> U >> V;
        adj[U].pb(V);
        adj[V].pb(U);
    }

    int result = dfs(S);
    cout << result << nl;

    return 0;
}
