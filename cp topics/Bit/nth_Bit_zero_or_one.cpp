#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int n;
    cin >> n;
    if(num & (1 << n))
    {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
}