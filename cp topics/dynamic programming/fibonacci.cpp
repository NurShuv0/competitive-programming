#include<bits/stdc++.h>
using namespace std;
#define sp ' '
#define nl "\n"

int fib(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else {
        int ans = n + fib(n - 1);
        return ans;
    }
}

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n;  i++)
    {
        int result = fib(i);
        cout << result << nl;
    }
}