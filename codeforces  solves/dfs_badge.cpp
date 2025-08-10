#include <bits/stdc++.h>
#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define pi 3.14159265358979323846
#define square(n) (n) * (n)
#define cube(n) (n) * (n) * (n)
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
const int N = 1000 + 5;
vector<int>adj[N];
vector<bool>visited(N,false);

int dfs(int node, map<int,int>mp)
{
    mp[node]++;
    if(mp[node] == 2) return node;
    for(auto &nxt: adj[node])
    {
        return dfs(nxt, mp);
    }
}
signed main()
{
    let_strt;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int nxt;
        cin >> nxt;
        adj[i].pb(nxt);
    }
    for(int i = 1; i <= n; i++)
    {
        map<int,int>mp;
        cout << dfs(i,mp) << sp;
    }
    cout << nl;
    
}