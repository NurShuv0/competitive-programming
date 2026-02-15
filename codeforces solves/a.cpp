#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    set<int>st(v.begin(),v.end());
    //cout << st.size() << " " << v.size();
    if(st.size() == v.size())
    {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }

    return 0;
}