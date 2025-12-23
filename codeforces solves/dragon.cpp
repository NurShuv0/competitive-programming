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
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define cn continue
#define mod 1000000007
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;
signed main()
{
    speed
    int initial,n;
    cin >> initial >> n;
    vector<pair<int,int>>x(n);
    for(int i = 0; i < n; i++)
    {
        cin >> x[i].f >> x[i].s;
    }
    // vector<int>x(n), y(n);
    // for(int i = 0; i < n; i++)
    // {
    //     cin >> x[i] >> y[i];
    // }
    // sort(all(x));
    // sort(all(y));
    sort(all(x));
    for(int i = 0; i < n; i++)
    {
        if(initial > x[i].f)
        {
            initial += x[i].s;
        }
        else{
            cout << "NO" << nl;
            return 0;
        }
    }
    cout <<"YES" << nl;
    return 0;
}
