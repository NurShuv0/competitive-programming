#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define PI 3.14159265358979323846
#define db double
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define cn continue
#define mod 1000000007
#define best INT_MAX
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;
signed main()
{
    speed;
    int n,m;
    cin >> n >> m;
    vector<int>v(m);
    for(int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    int time = 0;
    int current = 1;
    for(int i = 0; i < m ;i++)
    {
        if(v[i] >= current)
        {
            time += v[i] - current;
        }
        else
        {
            time += n - current + v[i];
        }
        current = v[i];
    }
    cout << time << nl;
    return 0;

}