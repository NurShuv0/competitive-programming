#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false); cin.tie(0);
#define sp ' '
#define nl "\n"
#define ll long long
using namespace std;
int main()
{
    speed;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (v[i] != v[0])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "No" << nl;
        }
        else
        {
            cout << "Yes" << nl;
            int mx = *max_element(v.begin(), v.end());
            for (int i = 0; i < n; i++)
            {
                cout << (v[i] == mx ? 1 : 2) << sp;
            }
            cout << nl;
        }
    }
}
