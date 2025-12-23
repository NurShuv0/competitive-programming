#include<bits/stdc++.h>
#define sp " "
#define nl "\n"
#define int long  long
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int mn = *min_element(v.begin(), v.end());
        vector<int>temp;
        sort(v.begin(), v.end());
        for(int i = 1; i < n; i++)
        {
            if(v[i] % mn == 0)
            {
                temp.push_back(v[i]);
            }
        }
        if (temp.size() == 0){
            cout << "NO" << "\n";
            continue;
        }
        //sort(temp.begin(), temp.end());
        // for(int i = 0; i < temp.size(); i++)
        // {
        // cout << temp[i] << sp;
        // }
        // cout << nl;
        // cout << mn << nl;
        bool flag = false;
        if(temp.size() == 1 && temp[0] == mn)
        {
            flag = true;
        }
        for(int i = 0; i < temp.size() - 1; i++)
        {
            for(int j = i + 1; j < temp.size(); j++)
            {
               //cout  <<  __gcd(temp[i], temp[j]) << nl;
               if(__gcd(temp[i], temp[j]) == mn)
                    {
                        flag = true;
                        break;
                    }
            }
        }
        cout <<(flag?"YES":"NO") << nl;
    }
}

