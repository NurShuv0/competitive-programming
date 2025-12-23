#include <iostream>
using namespace std;
int main()
{
    string nr, sw, result;
    cin >> nr >> sw;
    for (int i = 0; i < nr.size(); i++)
    {
        if (nr[i] != sw[i])
        {
            result.push_back('1');
        }
        else
        {
            result.push_back('0');
        }
    }
    cout << result;
}