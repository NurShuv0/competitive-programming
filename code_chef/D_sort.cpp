#include<bits/stdc++.h>
#define nl "\n"
#define sp ' '
#define let_strt ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main()
{
    let_strt;
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(auto &x: v)
    {
        cout << x << nl;
    }
}