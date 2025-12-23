#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false); cin.tie(nullptr);
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
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;
signed main()
{
    speed;
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        bool flag = true;
        string s;
        cin >> s;
        char temp = s[0];
        for (int i = 0; i < x && flag; i++)
        {
            for (int j = i + 1; j < (x - 1) && flag; j++)
            {
                if ((s[i] == s[j]) || s[j] == s[x - 1])
                    flag = false;
            }
        }
        if (flag)
        {
            cout << "No" << nl;
        }
        else
        {
            cout << "Yes" << nl;
        }
    }
    return 0;
}