#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define sp " "
#define nl "\n"
#define INF 1e9 + 7
using namespace std;
int main() {
    speed;
    int t;
    cin >> t;
    while(t--)
    {
        str str;
        cin >> str;
        int zero = 0;
        bool flag = false;
        int digit = str.size();
        for(int i = digit - 1; i >= 0; i--)
        {
            if(str[i] != '0')
                flag = true;
            else if(flag)
                zero++;
        }
        //cout << zero << sp ;
        cout << digit - (zero + 1) << nl;
    }
}