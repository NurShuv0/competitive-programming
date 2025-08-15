#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sp " "
#define nl "\n"
#define ll long long
using namespace std;
bool isComposite(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    speed;
    ll n;
    bool flag = true;
    cin >> n;
    if (n % 2 == 0)
    {
        int temp = n / 2;
        if (temp % 2 == 0)
        {
            cout << temp << sp << temp;
        }
        else
        {
            cout << temp + 1 << sp << temp - 1;
        }
    }
    else
    {
        int i = 3;
        while (flag)
        {
            if (i % 2 != 0)
            {
                if (isComposite(i))
                {
                    cout << i << sp << n - i;
                    flag = false;
                }
            }
            i++;
        }
    }
}