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
        bool flag = false;
        for(int i = 0; i < n - 1; i++)
        {
            if(str[i] == '1' && str[i + 1] == '0')
            {
                flag = true;
            }
        }
        if(!flag)
        {
            cout << "Bob" << nl;cn;
        }
        cout << "Alice" << nl;
        int one = -1;
        for(int i = 0; i < n; i++)
        {
            if(str[i] == '1')
            {
                one = i + 1;
                break;
            }
        }
        vector<int>v;
        for(int i = one; i <n; i++)
        {
            if(str[i] == '0')
            {
                v.pb(i + 1);
            }
        }
        cout << v.size() + 1 <<nl << one << sp;
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i] << sp;
        }
        cout << nl;
    }
    return 0;
}