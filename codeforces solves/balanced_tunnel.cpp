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
    int n;
    cin >> n;
    vector<int>in(n), out(n);
    for(int i = 0; i < n; i++)
    {
        cin >> in[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> out[i];
    }
    map<int,bool>visited;
    int left_in = 0,left_out = 0;
    int ans = 0;
    while(left_in < n && left_out < n)
    {
        //cout <<left_in << sp << left_out << nl;
        if(visited[in[left_in]])
        {
           // cout << left_in << sp << "YES" << nl;
            left_in++;
            cn;
        }
        if(in[left_in] != out[left_out])
        {
            ans++;
            //cout << left_in << sp << left_out <<nl;
            visited[out[left_out]] = true;
            left_out++;
        }
        else {
            visited[out[left_out]] = true;
            left_in++;
            left_out++;
        }
    }
    cout << ans << nl;
    return 0;
}