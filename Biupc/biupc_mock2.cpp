#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<numeric>
#include<cstring>
#include<set>
#include<map>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    ll n;
    cin >> n;
    vector<double> arr(n);
    double sum = 0.00;
    for (auto &c : arr)
    {
        cin >> c;
        sum += c;
    }
    double swt = sum / n;
    cout << fixed << setprecision(2) << swt << nl;
}