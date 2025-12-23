#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<numeric>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    int a,b,c,d,result = 0;
    cin >> a >> b >> c >> d;
    str str;
    cin >> str;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '1')
        {
            result += a;
        }
        else  if(str[i] == '2')
        {
            result += b;
        }
        else if(str[i] == '3')
        {
            result += c;
        }
        else if(str[i] == '4')
        {
            result += d;
        }
    }
    cout <<result  << nl;
}