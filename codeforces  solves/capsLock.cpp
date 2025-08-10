#include <bits/stdc++.h>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define int long long
using namespace std;
bool isAllUppercase(const string &str)
{
    for (char ch : str)
    {
        if (isalpha(ch) && !isupper(ch))
        {
            return false;
        }
    }
    return true;
}
bool isUppercase(const string &str)
{
    for (int i = 1; i < str.size(); i++)
    {
        if (isalpha(str[i]) && !isupper(str[i]))
        {
            return false;
        }
    }
    return true;
}
signed main()
{
    speed
    string str;
    cin >> str;
    if (isAllUppercase(str))
    {
        for (int i = 0; i < str.size(); i++)
        {
            str[i] = tolower(str[i]);
        }
        cout << str << nl;
        return 0;
    }
    else if (islower(str[0]) && isUppercase(str)) 
    {
        str[0] = toupper(str[0]);
        for(int i = 1; i < str.size(); i++)
        {
            str[i] = tolower(str[i]);
        }
        cout << str << nl;
        return 0;
    }
    cout << str << nl;
    return 0;
}