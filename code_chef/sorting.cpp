#include<bits/stdc++.h>
#define sp ' '
#define nl "\n"
#define let_strt ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(a < b && a < c)
        {
            cout << "ALICE" << nl;
        }
        else if(b < a &&  b < c)
        {
            cout << "BOB" << nl;
        }
        else {
            cout << "CHARLIE" << nl;
        }
    }
}