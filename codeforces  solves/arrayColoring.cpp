#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int>v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int zero = v[0];
        int last = v[n-1];
        int mx = max(zero, last);
        int mxv = *max_element(v.begin(), v.end());
        sort(v.rbegin(), v.rend());
        int ans = 0;
        if(k > 1)
        {
            cout << accumulate(v.begin(), v.begin() + k + 1,0LL) << nl;
            continue;
        }
        for(int i = 0; i < k; i++)
        {
            ans += v[i];
        }
        cout << (mx == mxv? ans + v[k]: ans + mx) << endl;
    }
}