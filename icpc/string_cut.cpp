#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin >> n;
    if(n == 0)
    {
        cout <<  1 ;
        return 0;
    }
    if(n == 1)
    {
        cout << 3;
        return 0;
    }
    cout << pow(2,n + 1) - 1;
}