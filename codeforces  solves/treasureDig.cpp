#include <iostream>
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define sp " "
#define nl "\n"
using namespace std;

void solve()
{
    int x, y, a;
    cin >> x >> y >> a;
    cout << (a % (x + y) < x? "NO" : "YES") << nl;
}

int main()
{
    speed;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
