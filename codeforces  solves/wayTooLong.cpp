#include<bits/stdc++.h>
#define sp " "
#define nl "\n"
#define pb push_back
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    speed;
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        if(str.size() > 10)
        {
            cout << str[0] << str.size() -2 <<str[str.size()-1] << nl;
        }
        else
        {
            cout << str << nl;
        }

    }

}
