#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long ans = ((n + 1) / 2);
        cout << ans - 1 << "\n";
    }
}