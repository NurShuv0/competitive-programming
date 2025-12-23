#include <bits/stdc++.h>
#define sp ' '
#define nl "\n"
#define int long long
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string, int> mp;
    while (n--)
    {
        string name;
        cin >> name;
        if (mp[name] == 0)
        {
            cout << "OK" << nl;
            mp[name]++;
        }
        else
        {
            int cnt = mp[name];
            string newName;
            while (true)
            {
                newName = name + to_string(cnt);
                if (mp.find(newName) == mp.end())
                {
                    cout << newName << nl;
                    mp[newName]++;
                    mp[name]++;
                    break;
                }
                cnt++;
            }
        }
    }
}