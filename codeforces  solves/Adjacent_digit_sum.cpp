#include <iostream>
#include <vector>
#include <cmath>
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
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x + 1 >= y && (x + 1 - y) % 9 == 0)
        {
            cout << "Yes" << nl;
        }
        else 
        {
            cout << "No" << nl;
        }
    }
}