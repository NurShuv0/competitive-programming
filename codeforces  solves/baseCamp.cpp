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
    vector<int>v;
    int input;
    while(cin >> input)
    {
        v.pb(input);
    }
    int mx = *max_element(all(v));
    int mn = *min_element(all(v));
    int sum = 0;
    int cnt = 0;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] != mx && v[i] != mn)
        {
            cnt++;
            sum += v[i];
        }
    }
    if(v.size() < 3)
    {
        cout << 0 << nl;
        return 0;
    }
    cout << round(sum/(double)cnt) << nl;
    //cout << ceil(sum / (double)cnt) << nl;
    return 0;
}