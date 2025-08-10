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
using namespace std;

vector<int> dx = {1, 0, -1, 0};
vector<int> dy = {0, 1, 0, -1};
int cnt = 0;

void BFS(int i, int j, vector<vector<char>> &grid, vector<vector<bool>> &visited)
{
    int n = grid.size();
    int m = grid[0].size();
    queue<pair<int, int>> q;
    q.push({i, j});
    visited[i][j] = true;
    cnt++;

    while (!q.empty())
    {
        pair<int, int>u = q.front();
        q.pop();
        int x = u.f;
        int y = u.s;

        for (int k = 0; k < 4; k++)
        {
            int row = x + dx[k];
            int col = y + dy[k];

            if (row >= 0 && row < n && col >= 0 && col < m && 
                grid[row][col] == '.' && !visited[row][col])
            {
                q.push({row, col});
                visited[row][col] = true;
            }
        }
    }
}

signed main()
{
    let_strt;
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && grid[i][j] == '.')
            {
                BFS(i, j, grid, visited);
            }
        }
    }
    cout << cnt << nl;
    return 0;
}