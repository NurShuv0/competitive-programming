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
        cin  >> n;
        string str;
        cin >> str;
        string rev = str;
        reverse(all(rev));
        if(rev == str)
        {
            cout << 0 << nl;
            cn;
        }
        vector<int> cnt0, cnt1;
        for(int i = 0; i < n; i++)
        {
            if(str[i] == '0')
            {
                cnt0.pb(i + 1);
            }
            else {
                cnt1.pb(i + 1);
            }
        }
        if(cnt1.size() > 0)
        {
            cout << cnt1.size() << nl;
            for(int i = 0; i < cnt1.size(); i++)
            {
                cout << cnt1[i] << sp;
            }
            cout << nl;
        }
        else {
            cout << cnt0.size() << nl;
            for(int i = 0; i < cnt0.size(); i++)
            {
                cout << cnt0[i] << sp; 
            }
            cout << nl;
        }
        vector<int>temp;
        for(int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            temp.pb(input);
        }
    }
    return 0;
}