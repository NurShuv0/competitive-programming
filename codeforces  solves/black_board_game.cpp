#include <bits/stdc++.h>
#define let_start ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define PI 3.14159265358979323846
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
    let_start;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 4 == 1 || n % 4 == 2 || n % 4 == 3)
            cout << "Alice" << nl;
        else
            cout << "Bob" << nl;
        // if(n % 4 == 1)
        // {
        //     cout << "Alice" << nl;
        // }
        // else
        // {
        //     cout << "Bob" << nl;
        // }
    }

}