#include <bits/stdc++.h>
#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define PI 3.14159265358979323846
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define cn continue
#define mod 1000000007
#define best INT_MAX
#define wrst INT_MIN
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
        string str;
        cin >> str;
        int nr = best;
        bool flag = false;
        for(int i = 0; i < str.size(); )
        {
            set<char> st;
            int left = i;
            int right = i;
            int cnt = 0;
            int next_left = i + 1;
            while(right < str.size() && st.size() <= 3)
            {
                st.insert(str[right]);
                cnt++;
                right++;
                if(st.size() == 2)
                {
                    next_left = left + 1;
                }
                if(st.size() == 3)
                {
                    flag = true;
                    nr = min(nr, cnt);
                    break;
                }
            }
            i = next_left;
        }
        if(!flag)
        {
            cout << 0 << nl;
        }
        else 
        {
            cout << nr << nl;
        }
    }
}
