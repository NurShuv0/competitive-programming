#include <bits/stdc++.h>
#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define PI 3.14159265358979323846
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define cn continue
#define mod 1000000007
#define best INT_MAX
#define wrst INT_MIN
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;
signed main()
{
    let_strt;
    int n, m;
    cin >> n >> m;
    multiset<int> ticket;
    multiset<int>player;
    for(int i = 0; i <  n; i++)
    {
        int input;
        cin >> input;
        ticket.insert(input);
    }
    // for(int i = 0; i < m; i++)
    // {
    //     cin >> player[i];
    // }
    // sort(all(ticket));
    for(int i = 0; i < m; i++)
    {
        int player;
        cin >> player;
        auto it = ticket.upper_bound(player);
        // int it = it - player.begin();
        if(it == ticket.begin()){
            cout << -1 <<  nl;
            cn;
        }
        else
        {
            it--;
            cout << *it << nl;
            ticket.erase(it);
        }

    }
}