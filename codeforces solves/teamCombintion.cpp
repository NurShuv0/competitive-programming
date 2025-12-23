#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <numeric>
#define ll long long
#define sp " "
#define nl "\n"
#define pb push_back
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> pr, math, sport;
    for (int i = 1; i <= n; i++)
    {
        int input;
        cin >> input;
        if (input == 1)
        {
            pr.pb(i);
        }
        else if (input == 2)
        {
            math.pb(i);
        }
        else if (input == 3)
        {
            sport.pb(i);
        }
    }
    int result = min({pr.size(), math.size(), sport.size()});
    cout << result <<nl;
    for (int i = 0; i < result; i++)
    {
        cout << pr[i]<< sp << math[i] << sp << sport[i] <<nl;
    }
}