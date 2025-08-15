#include<bits/stdc++.h>
#define sp ' '
#define nl "\n"
#define int long long
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n;
    cin >> n;
    if(n > 0)
    {
        cout << n;
    }
    else
    {
        int last_dig = n % 10;
        n /= 10;
        int sec_last_dig = n % 10;
        //cout << n << sp << last_dig << sp << sec_last_dig << sp;
        if(abs(last_dig) >= abs(sec_last_dig))
        {
            cout << n;
        }
        else
        {
            
            n /= 10;
            n *= 10;
            n += last_dig;
            //cout << n << sp << last_dig << sp << sec_last_dig << sp;
            cout << n;
        }
    }
}