#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl "\n"
#define sp " "
#define ll long long
using namespace std;
int main()
{
    speed;
    int tt;
    cin >> tt;
    while(tt--)
    {
        ll n;
        cin >> n;
        vector<ll>v(n);
        bool flag = true;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for(ll i = 0; i < n; i++)
        {
            if(v[i] <= 2 * max(i, n - (i + 1)))
            {
                cout << "NO" << nl;
                break;
            }else{
                flag = false;
            }
            
        }
        if(!flag)
        {
            cout << "YES" << nl;
        }
    }
}