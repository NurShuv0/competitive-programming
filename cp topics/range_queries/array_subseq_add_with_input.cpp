
//with all element zero 
#include<bits/stdc++.h>
#define sp " "
#define nl "\n"
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int>v(n + 2,0);
    for(int i = 1; i <= n; i++)
    {
        int input;
        cin >> input;
        v[i] += input;
        v[i+1] -= input;
    }
    while(q--)
    {
        int l, r, add;
        cin >> l >> r >> add;
        v[l] += add;
        v[r+1] -= add;
    }
    for(int i = 1; i <= n; i++)
    {
        v[i] += v[i-1];
        cout << v[i] << sp;
    }
}