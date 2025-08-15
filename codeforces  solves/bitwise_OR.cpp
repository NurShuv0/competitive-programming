#include<iostream>
#include<vector>
#include<cmath>
#define sp " "
#define nl "\n"
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, i = 0;
        cin >> n >> x;
        int count = 0;
        vector<ll>v(n,x);
        for(int i = 0; i < n; i++)
        {
            if(i <= x && (x | i )== x)
                v[i] = i;
            else break;
        }
        ll swt = 0;
        for(int i = 0; i < n; i++)
        {
            swt |= v[i];
        }
        if(swt != x)
        {
            v[n - 1] = x;
        }

        for(int i = 0; i < n ; i++)
        {
            cout << v[i] << sp ;
        }
        cout <<  nl;
    }

}