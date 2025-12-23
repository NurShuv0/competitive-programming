#include<iostream>
#include<vector>
#include<cmath>
#define sp ' '
#define nl "\n"
#define ll long long
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

bool isPerfectSquare(ll n)
{
    ll x = sqrt(n);
    if(x * x == n)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
bool isPrime(ll n)
{
    if(n == 1)
    {
        return false;
    }
    for(ll i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    speed
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if(isPrime(sqrt(v[i])) && isPerfectSquare(v[i]))
        {
            cout <<"YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
}