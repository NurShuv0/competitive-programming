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
    int n,  q;
    cin >> n >> q;
    vector<int>v(n), value(q);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i < q; i++)
    {
        cin >> value[i];
    }
    int i = 0;
    while(q--)
    {
        // int indx = upper_bound(v.begin(), v.end(), value[i]) - v.begin();
        // cout << indx <<nl;
        int left = -1, right = n;
        while(right > left + 1)
        {
            int mid = (left + right)/2;
            if(v[mid] > value[i])
            {
                right = mid;
            }
            else {
                left = mid;
            }
        }
        cout << left + 1 << nl;
        i++;
    }
    return 0;
}