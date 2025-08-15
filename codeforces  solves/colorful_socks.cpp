#include<iostream>
#include<cmath>
#include<vector>
#include<cstring>
#include<algorithm>
#include<iomanip>
#include<numeric>
#define ll long long
#define sp " "
#define nl "\n"
#define pb push_back
#define swt sweet
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    vector<ll>v(2);
    cin >> v[0] >> v[1];
    ll result = min(v[0], v[1]);
    ll sweet = max(v[0], v[1]) - result;
    cout << result << sp << swt/2 << nl;
}