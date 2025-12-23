#include<iostream>
#include<algorithm>
#include<array>
#include<iomanip>
#include<cmath>
#include<set>
#include<vector>
#include<map>
#include<utility>
#include<cstring>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
using namespace std;
int main()
{
    speed;
    ll t;
    cin >> t;
    while(t--)
    {
        ll sum = 0;
        ll n;
        cin >> n;
        while(n > 0)
        {
            sum += n;
            n /= 2;
        }
        cout << sum << nl;
    }
    return 0;
}