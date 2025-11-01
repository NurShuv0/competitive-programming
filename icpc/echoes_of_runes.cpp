#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int>temp = v;
    sort(temp.begin(), temp.end());
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] != temp[i])
        {
            cnt++;
        }
    }
    cout << (cnt <= 2 ? "Sorted":"Failed") << "\n";
}