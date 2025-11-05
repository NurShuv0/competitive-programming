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
    int t;
    cin >> t;
    while(t--)
    {
        string n;
        cin >> n;
        for(int i = 0; i < n.size(); i++)
        {
            int temp = n[i] - '0';
            int indx = i;
            for(int j = i + 1; j <= min(i + 9, (int)n.size()); j++)
            {
                if(n[j] - '0' - j + i > temp)
                {
                    temp = n[j] - '0' - j + i;
                    indx = j;
                }
            }
            while(indx > i)
            {
                swap(n[indx], n[indx-1]);
                indx--;
            }
            n[i] = (temp + '0');
        }
        cout << n << nl;
    }
}