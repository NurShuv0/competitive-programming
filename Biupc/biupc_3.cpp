#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<numeric>
#include<cstring>
#include<set>
#include<map>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    string swt;
    cin >> swt;
    for(int i = 0; i < swt.size(); i++)
    {
        if(swt[i] == 'a' || swt[i] == 'e' || swt[i] == 'i' || swt[i] == 'o' || swt[i] =='u')
        {
            swt[i]++;
        }
        else if(swt[i] == 'y')
        {
            swt[i] = 'a';
        }
        else if(swt[i] == 'z')
        {
            swt[i] = 'b';
        }
        else
        {
            swt[i] += 2;
        }
    }
    cout << swt << nl;
}