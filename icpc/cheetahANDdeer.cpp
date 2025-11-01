#include<bits/stdc++.h>
#define int long long
#define nl "\n"
#define sp " "
using namespace std;

signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int>c(n), d(m);
        for(int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        for(int i = 0; i < m; i++)
        {
            cin >> d[i];
        }
        if(n > m)
        {
            cout << "NO" << nl;
            continue;
        }
        sort(c.begin(), c.end());
        sort(d.begin(), d.end());
        bool nur = false;
        int left = 0, right = 0;
        int cnt = 0;
        while(left <= m)
        {
            if(d[left] >= c[right])
            {
                left++;
            }
            else{
                left++;
                right++;
                cnt++;
            }
        }
        cout << ((cnt >= n) ? "YES":"NO") << nl;


    }
}