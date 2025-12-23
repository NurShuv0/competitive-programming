#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);
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
        int n, x;
        cin >> n >> x;
        if (n == 1 && x == 1)
        {
            cout << 0 << nl;
        }
        else if (n == x)
        {
            for (int i = 0; i < n; i++)
                cout << i << sp;
            cout << nl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (i == x)
                {
                    continue;
                }
                else
                {
                    cout << i << sp;
                }
            }
            cout << x << nl;
        }
    }
    return 0;
}