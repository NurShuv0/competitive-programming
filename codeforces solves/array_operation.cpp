#include<iostream>
#include<algorithm>
#include<cmath>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using  namespace std;
int main()
{
    speed
    int t;
    cin >> t;
    while(t--)
    {
        int n, k , p;
        cin >> n >> k >> p;
        double swt = ceil(abs(static_cast<double>(k) / p));
        //cout << swt << sp;
        if(n < abs(swt))
        {
            cout << -1 << nl;
        }
        else 
            cout << abs(swt) << nl;
    }
}