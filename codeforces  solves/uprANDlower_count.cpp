#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int count=0, cnt=0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            count++;
        }

        else
        {
            cnt++;
        }
    }
    for (int i = 0; i < str.size(); i++)
    {
        if (count > cnt)
        {
            str[i] = toupper(str[i]);
        }
        else
            str[i] = tolower(str[i]);
    }
    cout<< str;
}
