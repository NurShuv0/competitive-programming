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
    int a, b;
    cin >> a >> b;
    vector<int>v(a), vv(b);
    for(int i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i < b; i++)
    {
        cin >> vv[i];
    }
    int pointa = 0;
    int pointb = 0;
    vector<int>ans(a + b);
    int pointc = 0;
    while(pointa < a || pointb < b)
    {
        if(((v[pointa] < vv[pointb]) && pointa < a) || pointb == b)
        {
            ans[pointc] = v[pointa];
            pointa++;
            pointc++;
        }
        else {
            ans[pointc] = vv[pointb];
            pointb++;
            pointc++;
        }
    }
    for(auto& c: ans)
    {
        cout << c << sp;
    }
    cout << nl;
    return 0;
}