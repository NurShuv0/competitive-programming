#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>v(n),b(n+1),c(n+1);
    long long int sum = 0;
    b[0] = 0;
    for(int i = 1; i <= n; ++i)
    {
        cin >> v[i] ;
        sum += v[i];
        b[i] = sum;
        cout << b[i] << " ";
    }
    cout << "\n";
    sort(v.begin(),v.end());
    long long int sum1 = 0;
    c[0] = 0;
    for(int i = 1; i <= n; ++i)
    {
        sum1 += v[i];
        c[i] = sum1;
        cout << c[i] << " ";
    }
    cout << "\n";
    int m; cin >> m;
    for(int i = 0; i < m; ++i)
    {
        int t,a,d;
        cin >> t >> a >> d;
        if(t == 1) cout << b[d+1] << " " <<  b[a] << "\n";
        else cout <<  c[d+1] << " " << c[a] << "\n";
    }
}