#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<cmath>
#define ll long long
#define sp " "
#define nl "\n"
#define pb push_back
using namespace std;
int main()
{
    vector<ll>start,end;
    for(int i = 0; i < 4; i++)
    {
        ll input;
        cin >> input;
        start.pb(input);
    }
    for(int i = 0; i < 4; i++)
    {
        ll input;
        cin >> input;
        end.pb(input);
    }
    vector<ll>result;
    for(int i = 0; i < 4; i++)
    {
        if(end[i] >= start[i])
        {
            result.pb(abs(end[i] - start[i]));
        }
        else 
        {
            result.pb(abs(end[i] - start[i]));
            result[i-1] -= 1;
            if( i == 1)
            {
                result[i] = 24 - result[i];
            }
            else 
            {
                result[i] = 60 - result[i];
            }
        }
    }
    
    for(int i = 0; i < 4; i++)
    {
        cout << result[i] << sp;
    }
}