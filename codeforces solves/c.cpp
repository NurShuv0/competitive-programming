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
        string s;
        cin >> s;
        
        int ones = 0, inversions = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                ones++;
            }
            else 
            {
                inversions += ones;
            }
        }
        cout << inversions <<nl;
        if(inversions % 2 == 0)
        {
            cout << "Bob" << nl;
        }
        else
        {
            cout << "Alice" << nl;
            
            int f_one = -1, f_zero = -1;
            for(int i = 0; i < n; i++)
            {
                if(s[i] == '1' && f_one == -1)
                {
                    f_one = i + 1;
                }
            }
            for(int i = n-1; i >= 0; i--)
            {
                if(s[i] == '0' && f_zero == -1)
                {
                    f_zero = i + 1;
                    break;
                }
            }
            cout << "2" << nl;
            cout << f_one << sp << f_zero << nl;
        }
    }
    return 0;
}