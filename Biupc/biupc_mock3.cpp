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
    bool flag = true;
    while(n != 0)
    {
        ll rem = n % 10;
        n /= 10;
        if(rem % 3 != 0)
        {
            flag = false;
            break;
        }
    }
    if(flag)
        cout << "Yes" << nl;
    else
        cout << "No" << nl;
}