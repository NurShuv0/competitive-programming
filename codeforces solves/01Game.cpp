#include<bits/stdc++.h>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define int long long
using namespace std;
signed main()
{
    speed
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int cnt0 = count(str.begin(), str.end(), '0');
        int cnt1 = count(str.begin(), str.end(), '1');
        int moves = min(cnt0, cnt1);
        cout <<(moves % 2 != 0?"DA":"NET") << nl;
        // for(int i = 0; i < str.size(); i++)
        // {
        //     //bool flag = true;
        //     if((str[i] != str[i + 1]) && (str[i + 2] == '0' || str[i + 2] == '1') && 
        // (str[i + 3] == '0' || str[i + 3] == '1'))
        //     {
        //         //flag = false;
        //         cnt++;
        //     }
        // }
        // if(cnt % 2 != 0)
        // {
        //     cout << "DA" << nl;
        // }
        // else 
        // {
        //     cout << "NET" << nl;
        // }
    }
}