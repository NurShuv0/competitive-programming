#include <bits/stdc++.h>
#define sp ' '
#define nl "\n"
#define ll long long
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int main()
{
    speed;
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n), v2;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll k = n - 1;
        ll sum = 0;
        while (k >= 0)
        {
            auto mx = max_element(v.begin(), v.begin() + k + 1);
            ll index = mx - v.begin();
            if (v[k] < *mx && *mx >= v[n-1])
            {
                //sum += *mx;
                //sum -= sum - v[k];
                sum = accumulate(v.begin() + k + 1, v.begin() + n, 0LL);
                sum += *mx;
            }
            else
            {
                sum = accumulate(v.begin() + k, v.begin() + n, 0LL);
            }
            v2.push_back(sum);
            k--;
        }
        for(auto c: v2)
        {
            cout << c << sp;
        }
        cout << nl;
    }
}
