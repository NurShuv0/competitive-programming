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
    int  n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int>temp = v, srt = v;
    sort(all(v));
    if(srt == v)
    {
        cout << "yes" << nl << "1" << sp << "1" << nl;
        return 0;
    }
    int left = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] != temp[i])
        {
            break;
        }
        else left++;
    }
    int right = n - 1;
    while(right > 0 && v[right] == temp[right])
    {
        right--;
    }
    reverse(temp.begin() + left , temp.begin() + right + 1);
    if(n == 1)
    {
        cout << "yes" << nl << "1" << sp << "1" << nl;
        return 0;
    }
        
    if(temp == v)
    {
        cout << "yes" << nl;
        cout << left + 1 << sp << right + 1<< nl;
    }
    else{
        cout << "no" << nl;
    }
}