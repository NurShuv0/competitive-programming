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
    {
        string str;
        cin >> str;
        string temp = str;
        reverse(all(temp));
        if(temp == str)
        {
            cout << "First" << nl;
            return 0;
        }
        map<char,int>mp;
        for(int i = 0; i < str.size(); i++)
        {
            mp[str[i]]++;
        }
        bool flag = true;
        int x = mp.begin()->s;
        int odd = 0;
        for(auto& c:mp)
        {
            if(c.s & 1)
            {
                odd++;
            }

        }
        if(!(odd & 1) && odd != 0)
        {
            flag = false;
        }
        cout << (flag?"First":"Second") << nl;
    }
    return 0;
}