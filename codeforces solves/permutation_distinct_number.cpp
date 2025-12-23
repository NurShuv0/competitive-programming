#include <bits/stdc++.h>
#define nl "\n"
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int main()
{
    speed;
    int tt;
    cin >> tt;
    
    int n;
    cin >> n;
    int result = ceil((((n * n) / 2) + 1) / 2);
    cout << result + 1 << endl;
}