#include<bits/stdc++.h>
using namespace std;
#define pb push_back

signed main()
{
    int n, m;
    cin >> n >> m;
    vector<int>adj[n + 1];
    for(int i = 1; i <= m; i++)
    {
        int u , v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    int src = 1;
    vector<bool>visited(n, false);
    vector<int>level(n + 1);
    queue<int>q;
    level[src] = 0;
    q.push(src);
    visited[src] = true;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        for(auto &next: adj[node])
        {
            if(!visited[next])
            {
                q.push(next);
                visited[next] = true;
                level[next] = level[node] + 1;
            }
        }
    }
    bool isTree = (n == m - 1);
    for(int i = 1; i <= n; i++)
    {
        if(!visited[i])
        {
            isTree = false;
        }
    }
    cout <<(isTree? "YES": "NO") << endl;
}