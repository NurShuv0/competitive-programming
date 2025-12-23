#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <iomanip>
#include <numeric>
#define ll long long
#define sp " "
#define nl "\n"
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sereja = 0, dima = 0;
    bool flag = true;
    while (!v.empty())
    {
        if (flag)
        {
            if (v[0] > v.back())
            {
                sereja += v[0];
                v.erase(v.begin());
            }
            else
            {
                sereja += v.back();
                v.pop_back();
            }
            flag = false;
        }
        else
        {
            if (v[0] > v.back())
            {
                dima += v[0];
                v.erase(v.begin());
            }
            else
            {
                dima += v.back();
                v.pop_back();
            }
            flag = true;
        }
    }
    cout << sereja << sp << dima << nl;
}