#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<iomanip>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    ll n,k,count = 0;
    cin >> n >> k;
    vector<ll>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(int i = 2; i < n; i += 3)
    {
        if(5 - v[i] >= k)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count << nl;
}