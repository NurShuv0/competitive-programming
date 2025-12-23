#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int mn = min(a, b);
        int mx = max(a, b);
        bool flag = true;
        int count = 0;
        for (int i = mn; i <= mx; i++)
        {
            if (i == c || i == d)
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
}