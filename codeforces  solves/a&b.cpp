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
        string str;
        cin >> n >> str;
        vector<int>posA, posB;
        for(int i = 0; i < n; i++)
        {
            if(str[i] == 'a')
            {
                posA.pb(i);
            }
            else {
                posB.pb(i);
            }
        }
        int ka = posA.size();
        int kb = posB.size();
        int ma = ka/2;
        int mb = kb/2;
        int mdnA = posA[ma];
        int  mdnB = posB[mb];
        int ansA = 0, ansB = 0;
        for(int i = 0; i < ka; i++)
        {
            ansA += abs(posA[i] - (mdnA - ma + i));
        }
        for(int i = 0; i < kb; i++)
        {
            ansB += abs(posB[i] - (mdnB - mb + i));
        }
        cout << min(ansA, ansB) << nl;
    }
    return 0;
}