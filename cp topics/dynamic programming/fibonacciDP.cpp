#include<bits/stdc++.h>
#define sp ' '
#define nl "\n"
using namespace std;

int n = 10;
vector<int>dp(n + 1, -1);
int fib(int n)
{
    if(n <= 1)return n;
    if(dp[n] != -1)return dp[n];
    int ans = fib(n-1) + fib(n-2);
    dp[n] = ans;
    return ans;
}

int main()
{
    for(int i = 0; i <=n; i++)
    {
        cout << fib(i) << nl;
    }
}