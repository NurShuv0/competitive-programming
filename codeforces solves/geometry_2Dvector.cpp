#include<bits/stdc++.h>
#define int long long
#define sp ' '
#define nl "\n"
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    double a1, b1, a2, b2,a3, b3;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    double cns = (a2 - a1) * (b3 - b1) -  (b2 - b1) * (a3 - a1);
    if(!cns)
    {
        cout << "TOWARDS" << nl;
    }
    else if(cns > 0)
    {
        cout << "LEFT" << nl;
    }
    else 
    {
        cout << "RIGHT" << nl;
    }
}