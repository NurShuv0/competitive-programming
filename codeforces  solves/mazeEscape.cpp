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
#define best LLONG_MAX
#define wrst LLONG_MIN
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;
signed main()
{
    let_strt;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k == n * n - 1)
        {
            cout << "NO" << nl;
            cn;
        }
        cout << "YES" << nl;
        vector<vector<char>> g(n, vector<char>(n, 'L'));

        int cnt = 0;
        int a, b;
        for (int i = 0; i < n && cnt < k; i++)
        {
            for (int j = 0; j < n && cnt < k; j++)
            {
                g[i][j] = 'U';
                cnt++;
                a = i;
                b = j;
            }
        }
        // cout << a << " " << b << endl;
        int rem = k % n;
        //rem = n - rem;
        // if (k % n != 0)
        // {
        //     int i = a;
        //     int j = b + 1;
        //     while (rem > 0)
        //     {
        //         //j++;
        //         if(i != n-1)
        //         {
        //             g[i][j] = 'D';
        //         }
        //         //g[i][j] = 'D';
        //         break;
        //         //cout << rem << sp;
        //         //rem--;
        //     }
        // }
        if(rem != 0)
        {
            if(a != n - 1)
            {
                g[a][b+1] = 'D';
            }
            else{
                g[a][b+1] = 'R';
            }
        }
        for (int i = a + 1; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    g[i][j] = 'R';
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << g[i][j];
            cout << nl;
        }
    }
    return 0;
}