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
vector<vector<int>>adj(1005, vector<int>(1005));
vector<vector<bool>>visited(1005, vector<bool>(1005));
int n, m;
int dfs(int row,int col)
{
    visited[row][col] = true;
    int ans = adj[row][col];
    if(row  != 0 && adj[row - 1][col] != 0 && !visited[row - 1][col])
    {
        ans += dfs(row - 1, col);
    }
    if(row != n - 1 && adj[row + 1][col] != 0 && !visited[row + 1][col])
    {
        ans += dfs(row + 1, col);
    }
    if(col != 0 && adj[row][col - 1] != 0 && !visited[row][col - 1])
    {
       ans +=  dfs(row, col - 1);
    }
    if(col != m - 1 && adj[row][col + 1] !=  0 && !visited[row][col + 1])
    {
       ans += dfs(row, col + 1);
    }
    return  ans;

}

signed main()
{
    let_strt;
    int t;
    cin >> t;
    while(t--)
    {
        cin >>  n >> m;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> adj[i][j];
                visited[i][j] = false;
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(adj[i][j] != 0 && !visited[i][j])
                {
                    ans = max(ans,dfs(i, j));
                }
            }
        }
        cout << ans << nl;
    }
}