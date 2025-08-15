#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sp " "
#define nl "\n"
#define pb push_back
#define ll long long
using namespace std;
int main()
{
    speed;
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int count = 0;
    int best = v[0];
    int worst = v[0];
    for(int i =0; i < n; i++)
    {
        if(v[i] > best)
        {
            count++;
            best = v[i];
        }
        else if(v[i] < worst)
        {
            count++;
            worst = v[i];
        }
    }
    cout << count << nl;
    return 0;
}