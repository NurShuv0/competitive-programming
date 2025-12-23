#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<numeric>
#define ll long long
#define nl "\n"
#define sp " "
#define pb push_back
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    ll price, burbles, swt = 0, count = 1;
    cin >> price >> burbles;
    bool flag = true;
    while(flag == true)
    {
        ll stop = (price * count) - burbles;
        ll stopp = (price * count);
        if(stop % 10 == 0 || stopp % 10 == 0)
        {
            flag = false;
        }
        else{
            swt++;
        }
        count++;
    }
    cout << swt + 1 << nl;
}
