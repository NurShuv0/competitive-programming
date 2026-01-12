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


int check_big(int a, int b)
{
    int cnt = 0;
    while(true)
    {
        if(a == b)
        {
            return cnt;
        }
        if(a < b)cnt++;
        if(a > b) return -1;
        a = (a << 1);
    }
}
int check_small(int a, int b)
{
    int cnt = 0;
    while(true)
    {
        
        if(a == b)
        {
            return cnt;
        }
        if(a > b)cnt++;//cout << cnt << sp ;
        if(a < b)return -1;
        a = (a >> 1);
    }
}


signed main() 
{
    let_strt;
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        if(a == b)
        {
            cout << 0 << nl;
            cn;
        }
        int tempa = a;
        int tempb = b;
        while(tempa % 2 == 0)
        {
            tempa = (tempa >> 1);
        }
        while(tempb % 2 == 0)
        {
            tempb = (tempb >> 1);
        }
        if((a % 2 == 1 && a > b) || (max(a,b) % min(a, b) != 0) || tempa != tempb)
        {
            cout << -1 << nl;
            cn;
        }
        bool big = false;
        bool small = false;
        if(a > b)
        {
            small = true;
        }
        else {
            big = true;
        }
        int ans;
        if(big)
        {
            ans = check_big(a, b);
        }
        if(small)
        {
            ans = check_small(a, b);
        }
        //cout << ans << nl;
        cout << (ans == -1? -1 : ceil(ans / double(3))) << nl;
    }
    return 0;
}