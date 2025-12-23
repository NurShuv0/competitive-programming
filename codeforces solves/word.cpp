#include<iostream>
#include<cstring>
#include<cmath>
#define ll long long
#define sp " "
#define nl "\n"
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int size = str.size();
        if(size > 10)
            cout << str[0]<< size-2 <<str[size-1] << nl;
        else
            cout << str << nl;
    }
}