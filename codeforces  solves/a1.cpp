#include <bits/stdc++.h>

using namespace std;

#define int int64_t

int32_t main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &c : a)
        {
            cin >> c;
        }
        sort(a.begin(), a.end());
        vector<int> T;
        bool ok = true;
        for (int i = 1; i < int(a.size()) && ok; i++)
        {
            if (a[i] % a[0] == 0)
            {
                T.push_back(a[i]);
            }
        }
        bool flag = false;
        if (T.size() == 0)
        {
            cout << "NO" << "\n";
        }
        else if(T.size() == 1 && T[0] == a[0])
        {
            flag = true;
        }
        else
        {
            int gc = T[0];
            for (int i = 1; i < int(T.size()); i++)
            {
                gc = __gcd(gc, T[i]);
                if (gc == a[0])
                {
                    flag = true;
                    break;
                }
            }
        }
        cout << (flag ? "YES" : "NO") << "\n";
    }
    return 0;
}
