#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#define sp " "
#define nl "\n"
#define ll long long
#define  speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int main()
{
    speed
    int n;
    cin >> n;
    vector<int>v;
    for(int i = 0; i < n * 3; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }
    int x, y, z;
    x = y = z = 0;
    for(int i = 0; i < n * 3; i += 3)
    {
        x += v[i];
        y += v[i + 1];
        z += v[i + 2];
    }
    if(x == 0 && y == 0 && z == 0)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout <<"NO" << nl;
    }

}