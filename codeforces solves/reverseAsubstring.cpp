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
    int n;
    cin >> n;
    string str;
    cin >> str;
    string temp = str;
    sort(all(temp));
    if(temp == str)
    {
        cout << "NO" << nl;
        return 0;
    }
    cout << "YES" << nl;
    string s = str;
    // reverse(all(s));
    // //cout << s << nl;
    // if(s != str)
    // {
    //     cout << 1 << sp << n << nl;
    //     return 0;
    // }
    for(int i = 0; i < n - 1; i++)
    {
        if(str[i] > str[i+1])
        {
            cout << i + 1 << sp << i + 2 << nl;
            return 0;
        }
    }
    return 0;
}