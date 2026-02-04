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

bool binary_search(int value, vector<int>&v)
{
    //sort(all(v));
    int left = 0;
    int right = v.size()-1;
    //int mid = (left + right)/ 2;

    while(left <= right)
    {
        int mid = (left + right)/ 2;
        if(v[mid] == value)
        {
            return true;
        }
        if(v[mid] > value)
        {
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return false;
}

signed main() 
{
    let_strt;
    int n,q;
    cin >> n >> q;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    while(q--)
    {
        int value;
        cin >> value;
        bool ans = binary_search(value, v);
        cout << (ans ? "found": "not found") << nl;
    }
    return 0;
}