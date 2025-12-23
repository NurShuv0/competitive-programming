#include<bits/stdc++.h>
#define sp " "
#define nl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        set<int>st;
        for(int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            st.insert(input);
        }
        cout << st.size() << nl;
    }
}