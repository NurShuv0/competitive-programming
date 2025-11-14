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
    int cs= 1;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n + 1), pmx(n+2), smn(n+2);
        for(int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        pmx[1] = v[1];
        for(int i = 2; i <= n; i++)
        {
            if(pmx[i-1] < v[i])
            {
                pmx[i] = v[i];
            }
            else{
                pmx[i] = pmx[i-1];
            }
            //cout << pmx[i] << sp;
        }
        //cout << nl;
        smn[n] = v[n];
        for(int i = n-1; i > 0; i--)
        {
            if(smn[i+1] > v[i])
            {
                smn[i] = v[i];
            }
            else {
                smn[i] = smn[i+1];
            }
            //cout << smn[i] << sp;
        }
        //cout << nl;
        bool flag = false;
        int ans;
        for(int i = 1; i <= n; i++)
        {
            if((pmx[i] > pmx[i-1]) && (smn[i] < smn[i+1]))
            {
                flag = true;
                ans = i;
                break;
            }
        }
        cout << "Case " << cs << ": ";
        cs++;
        if(flag)
        {
            cout << ans << nl;
        }
        else {
            cout << "Humanity is doomed!" << nl;
        }
    }
    return 0;
}