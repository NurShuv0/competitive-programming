#include <bits/stdc++.h>
#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
using namespace std;

signed main() 
{
    let_strt;
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        
        int ans = 0;
        int m = n;
        
        while(m > 0) {
            double len = min((double)b, (double)a / m);
         
            int tabs_can_close = (int)(a / len);
            
            if(tabs_can_close >= m) {
                ans++;
                break;
            } else {
                ans++;
                m -= tabs_can_close;
            }
        }
        
        cout << ans << nl;
    }
    return 0;
}