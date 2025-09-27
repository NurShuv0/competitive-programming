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
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int cnt0 = 0;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == '0')
            {
                cnt0++;
            }
        }
        //int check = ceil(cnt0 / 2.0);
        if(cnt0 == 1)cout << "BOB" << nl;
        else if(cnt0 & 1)
        {
            cout << "ALICE" << nl;
        }
        else {
            cout << "BOB" << nl;
        } 
    }
    return 0;
}