#include <bits/stdc++.h>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define int long long
using namespace std;
signed main()
{
    speed;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k; 
        string bitstring(k, '1');
        bitstring += string(n - k, '0');
        cout << bitstring << nl;
    }
    return 0;
}