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
signed main() {
    speed;
    int t;
    cin >> t;
    while (t--) {
        int w, h, a, b;
        cin >> w >> h >> a >> b;
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        bool flag = true;
        if(abs(x1 - x2) < a && abs(y1 - y2) % b != 0)
        {
            flag = false;
        }
        if(abs(y1 - y2) < b && abs(x1 - x2) % a != 0)
        {
            flag = false;
        }
        if(abs(y1 - y2) % b != 0 && abs(x1 - x2) % a != 0)
        {
            flag = false;
        }
        cout <<(flag?"YES":"NO") << nl;
        // int mx1 = ((x1 % a) + a) % a;
        // int mx2 = ((x2 % a) + a) % a;
        // int my1 = ((y1 % b) + b) % b;
        // int my2 = ((y2 % b) + b) % b;
        // if (mx1 == mx2 && my1 == my2) {
        //     cout << "Yes" << nl;
        // } else {
        //     cout << "No" << nl;
        // }
    }
    return 0;
}