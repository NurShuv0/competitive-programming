#include <bits/stdc++.h>
#define sp ' '
#define nl "\n"
#define ll long long
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int main()
{
    speed
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        sort(str.rbegin(), str.rend());
        bool flag = false;
        for (int i = 1; i < str.size(); i++)
        {
            int index;
            int mn = str[i];
            for (int j = i + 1; j < str.size(); j++)
            {
                if (mn > str[j] && (str[j] - '0') >= 10 - (i + 1))
                {
                    flag = true;
                    mn = str[j];
                    index = j;
                }
            }
            if (flag)
            {
                swap(str[i], str[index]);
                flag = false;
            }
        }
        cout << str << nl;
    }
}