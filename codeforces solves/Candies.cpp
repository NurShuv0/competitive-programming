#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, swt = 0;
        cin >> n;
        long long a = n -1;
        long long b = 1;
        while (a > b)
        {
            swt++;
            a--;
            b++;
        }
        cout << swt << "\n";
    }
}