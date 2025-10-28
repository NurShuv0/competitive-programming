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
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;


int gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

bool isPrime(int x) {
    if (x < 2) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for (int i = 3; i * i <= x; i += 2)
        if (x % i == 0)
            return false;
    return true;
}


signed main() 
{
    let_strt;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        bool f = false;
        for(int i = 2; i <= 1e6; i++)
        {
            if(!isPrime(i)) cn;
            bool flag = false;
            for(int j = 0; j < n; j++)
            {
                if(gcd(i, v[j]) == 1)
                {
                    flag = true;
                    break;
                }
            }
            if(flag)
            {
                ans = i;
                f = true;
                break;
            }
        }
        cout << (f?ans:-1) << nl;
    }
    return 0;
}