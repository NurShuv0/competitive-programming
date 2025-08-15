#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    speed;
    int n, result;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int max = v[0], mxi = 0;
    int min = v[0], mn_i = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
            mxi = i;
        }
        if (v[i] <= min)
        {
            min = v[i];
            mn_i = i;
        }
    }
    int max_time = mxi - 1;
    int min_time = n - mn_i;
    if (mxi > mn_i)
    {
        result = max_time + min_time - 1;
    }
    else
    {
        result = max_time + min_time;
    }
    cout << result << nl;
}
