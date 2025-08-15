#include<iostream>
#define sp ' '
#define nl "\n"
#define ll long long
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int main()
{
    speed
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        bool flag = true;
        ll cnt = 0;
        if(n == 1)
        {
            flag = false;
        }
        for(ll i = 2; i <= n / 2; i++)
        {
            if(n % i == 0)
            {
                cnt++;
            }
            if(cnt == 2)
            {
                flag = false;
                break;
            }
        }
        if(cnt == 0)
        {
            flag = false;
        }
        //cout << cnt << sp;
        if(flag)
        {
            cout << "YES" << nl;
        }
        else 
        {
            cout << "NO" << nl;
        }
    }
}