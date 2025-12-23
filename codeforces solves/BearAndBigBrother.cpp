#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b,nur=0;
    cin >> a >> b;
    for (int i = 0; i < 10; i++)
    {
        if (a <= b)
        {
            a *=3;
            b *=2;
            nur++;

        }
    }
    cout<<nur;
}
