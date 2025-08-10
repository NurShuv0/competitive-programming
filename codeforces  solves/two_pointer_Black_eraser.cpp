#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define PI 3.14159265358979323846
#define db double
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
    speed
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >>  n >> k;
        int left = 0;
        int right = left + k;
        string str;
        cin >> str;
        int cnt = 0;
        for(int i = 0; i < n;i++)
        {
            // if(str[i] == 'B')
            // {
            //     cnt++;
            //     i += k;
            // }
            // else 
            // {
            //     i++;
            // }
            if(str[i] == 'B')
            {
                left = i;
                right = min(i + k - 1, n - 1);
                while(left <= right)
                {
                    if(str[left] == 'B')
                    {
                        str[left] = 'W';
                    }
                    left++;
                }
                i += k - 1;
                cnt++;
            }
            // else
            // {
            //     i++;
            // }
            
        }
        cout << cnt << nl;
    }
}
