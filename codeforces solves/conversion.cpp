#include<bits/stdc++.h>
#define ll long long 
#define nl "\n"
#define sp " "
using namespace std;
int main()
{
    str str;
    getline(cin, str);
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == ',')
        {
            str[i] = ' ';
        }
        else if(str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
        else{
            str[i] = str[i] - 32;
        }
    }
    cout << str;
}