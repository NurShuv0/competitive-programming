#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include<map>
#include<numeric>
#include<iomanip>
#include<cstring>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    int n, total = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    auto mx = max_element(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        total += (*mx - v[i]);
    }
    cout << total << nl;
    
}