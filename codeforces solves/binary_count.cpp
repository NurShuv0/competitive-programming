#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);
#define sp ' '
#define nl "\n"
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int cnt = 0;
        for(int i = 0; i < str.size() ; i++)
        {
            if(str[i] == '1')
            {
                cnt++;
            }
        }
        int ans = cnt;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == '0')
            {
                cnt++;
                ans += cnt;
            }
            else
            {
                cnt--;
                ans += cnt;
            }
        }
        cout << cnt << nl;
    }
}