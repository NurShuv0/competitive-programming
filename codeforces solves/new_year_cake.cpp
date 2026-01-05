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

int a, b;

bool valid_a(int x)
{
    if(a - x < 0) return false;
    return true;

}
bool valid_b(int x)
{
    if(b - x  < 0)return false;
    return true;
}

signed main() 
{
    let_strt;
    int t;
    cin >> t;
    while(t--)
    {
        int ans = 0;
        cin >> a >> b;
        int tempa = a, tempb = b;
        int track = 1;
        for(int i = 0; i < 20; i++)
        {
            if(i % 2 == 0)
            {
                if(valid_a(track))
                {
                    a -= track;
                    ans++;
                }
                else break;
            }
            else {
                if(valid_b(track))
                {
                    b -= track;
                    ans++;
                }
                else break;
            }
            track *= 2;
        }
        int ans2 = ans;
        ans = 0;
        track = 1;
        a = tempa, b = tempb;
        for(int i = 0; i < 20; i++)
        {
            if(i % 2 == 0)
            {
                if(valid_b(track))
                {
                    b -= track;
                    ans++;
                }
                else break;
            }
            else {
                if(valid_a(track))
                {
                    a -= track;
                    ans++;
                }
                else break;
            }
            track *= 2;
        }
       // cout << ans << sp << ans2 << nl;
        cout << max(ans, ans2) << nl;
    }
    return 0;
}