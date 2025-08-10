#include<bits/stdc++.h>
#define nl "\n"
#define sp ' '
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>like(n), comment(n);
        for(int i = 0; i < n; i++)
        {
            cin >> like[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> comment[i];
        }
        int ans = 0;
        for(int i = 1; i < n; i++)
        {
            if(like[i] > like[ans])
            {
                ans = i;
            }
            else if(like[i] == like[ans])
            {
                if(comment[i] > comment[ans])
                {
                    ans = i;
                }
            }
        }
        cout << ans + 1 << nl;
    }
}