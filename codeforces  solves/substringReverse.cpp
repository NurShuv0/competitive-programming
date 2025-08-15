#include <bits/stdc++.h>
#define sp " "
#define nl "\n"
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        ll n;
        cin >> n;
        str str;
        cin >> str;
        int index;
        bool flag = true;
        int maxlen = 1, currlen = 1;
        int startIndex = 0, maxIndex = 0;
        for (int i = 1; i < str.size(); i++)
        {
            if (str[i] == str[i - 1])
            {
                currlen++;
            }
            else
            {
                currlen = 1;
                startIndex = i;
            }
            if (currlen > maxlen)
            {
                maxlen = currlen;
                maxIndex = startIndex;
            }
            if (str[i] != str[i + 1])
            {
                flag = false;
            }
        }
        int endIndex = maxIndex + maxlen - 1;
        char maxChar = str[maxIndex];
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] != str[i + 1])
            {
                index = i;
                break;
            }
        }
        reverse(str.begin() + (index + 1), str.begin() + endIndex + 1);
        cout << index << sp << endIndex;
        // cout << "Character: " << maxChar << nl;
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] != str[i + 1])
            {
                count += 2;
            }
            else
            {
                count++;
            }
        }
        cout << str << sp;
        count++;
        if (str[0] == '1' && flag)
        {
            cout << count + 1 << nl;
        }
        else if (str[0] == '1')
        {
            cout << count + 1 << nl;
        }
        else
        {
            cout << count << nl;
        }
    }
}
