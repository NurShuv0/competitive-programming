#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<numeric>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,count = 1;
        cin >> n;
        vector<ll>v(n);
        for(int i = 0;  i < n; i++)
        {
            cin >> v[i];
        }
        for(int i = 0; i < n; i++)
        {
            if(v[i] <= v[i+1])
            {
                count++;
            }
        }
        cout << count <<nl;
    }
}