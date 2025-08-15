#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false); cin.tie(0);
#define sp ' '
#define nl "\n"
#define ll long long
using namespace std;
int main()
{
    speed
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto &c : v)
        {
            cin >> c;
        }
        int ans = accumulate(v.begin(), v.end(), 0LL);
        sort(v.begin(), v.end());
        int mx = *max_element(v.begin(), v.end());
        int cnt = count(v.begin(), v.end(), mx);
        if (v.back() - v.front() > k && cnt > 1)
        {
            cout << "Jerry" << nl;
        }
        else
        {
            if (v.back() - v.front() > k && (v.back() - 1 - v.front()) > k)
            {
                cout << "Jerry" << nl;
            }
            else
            {
                if (ans & 1)
                {
                    cout << "Tom" << nl;
                }
                else
                {
                    cout << "Jerry" << nl;
                }
            }
        }
    }
}