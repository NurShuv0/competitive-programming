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
        map<int,int>mp;
        for(int i = 0; i < n;  i++)
        {
            int input;
            cin >> input;
            mp[input]++;
        }
        // for(auto& c: mp)
        // {
        //     cout << c.f << sp << c.s << nl;
        // }
        int i = 0;
        int temp;
        bool flag = false;
        int cnt = 0;
        for(auto& c: mp)
        {
            temp = c.f;
            if(c.f == 0)
            {
                //cout<< "cf" << c.f << nl;
                if(c.s < 2)
                {
                    cnt++;
                }
                i++;
                cn;
            }
            if(c.f != i)
            {
                cout << i << nl;
                flag = true;
                break;
            }
            else if(c.s > 1 && c.f == i)
            {
                i++;
                cn;
            }
            else {
                cnt++;
                //cout << cnt << sp;
                if(cnt == 2)
                {
                    flag = true;
                    cout << i << nl;
                    break;
                }
                i++;
            }
        }
        if(!flag)
        {
            cout << temp + 1 << nl;
        }
    }
    return 0;
}