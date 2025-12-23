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
#define N 2005
using namespace std;
vector<int>graph[N];
vector<int>depth(N);
void dfs(int node, int cnt)
{
    depth[node] = cnt;
    for(auto& neighbour: graph[node])
    {
        dfs(neighbour,cnt+1);
    }
}
signed main()
{
    let_strt;
    int n;
    cin >> n;
    vector<int>manager(n + 1);
    for(int i = 1; i <= n; i++)
    {
        int input;
        cin >> input;
        manager[i] = input;
        if(input != -1)
        {
            graph[input].pb(i);
        }
    }
    for(int i = 1; i <= n; i++)
    {
        if(manager[i] == -1)
        {
            dfs(i,1);
        }
    }
    int ans = 0;
    for(int i = 1; i <= n;  i++)
    {
        ans = max(ans, depth[i]);
    }
    cout << ans << nl;
}