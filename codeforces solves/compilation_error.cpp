//https://codeforces.com/problemset/problem/519/B
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
#define mset(m, v) memset(m, v, sizeof(m))
#define cn continue
#define mod 1000000007
#define best INT_MAX
#define wrst INT_MIN

// int gcd(int a, int b) {return b == 0 ? a : gcd(b, a % b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}

using namespace std;
signed main()
{
    let_strt
    int n;
    cin >> n;
    vector<int>v(n),v2(n-1),v3(n-2);
    int s1 = 0,s2 = 0,s3 = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        s1 += v[i];
    }
    for(int i = 0; i < n-1; i++)
    {
        cin >> v2[i];
        s2 += v2[i];
    }
    for(int i = 0; i < n - 2; i++)
    {
        cin >> v3[i];
        s3 += v3[i];
    }
    cout << s1 - s2 << nl << s2 - s3 << nl;
}