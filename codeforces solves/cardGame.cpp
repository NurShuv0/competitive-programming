#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<iomanip>
#include<numeric>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    ll n, sereja = 0, dima = 0;
    cin>> n;
    vector<ll>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(),greater<ll>());
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            sereja += v[i];
        }
        else{
            dima += v[i];
        }
    }
    cout << sereja << sp << dima << nl;


}