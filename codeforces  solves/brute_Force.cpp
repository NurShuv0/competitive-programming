#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long 
#define sp " "
#define nl "\n"
#define speed  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    int t;
    cin >> t;
    while(t--)
    {
        str str;
        cin >> str;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == 'a')
            {
                cout << "YES" << nl;
                break;
            }
            else if(str[i] =='b' && str[i+1] == 'a')
            {
                cout << "YES" << nl;
                break;
            }
            else if(str[i] == 'c' && str[i + 1] == 'b')
            {
                cout << "YES" << nl;
                break;
            }
            else 
            {
                cout << "NO" << nl;
                break;
            }
        }
    }
}