#include <iostream>
#include <cstring>
#include <algorithm>
#include <iomanip>
#include <numeric>
#define ll long long
#define sp " "
#define nl "\n"
#define pb push_back
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;
        string str = "codeforces";
        if (str.find(c) != str::npos)
        {
            cout << "YES" <<sp;
        }
        else
        {
            cout << "NO" << sp;
        }
    }
}