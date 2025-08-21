#include<bits/stdc++.h>
using namespace std;
#define nl "\n"

int fact(int n)
{
    if(n <= 1){
        return 1;
    }
    int ans = n * fact(n - 1);
    return ans;
}

int main()
{
    int n; 
    cin >> n;
    int result = fact(n);
    cout << result << nl;
}