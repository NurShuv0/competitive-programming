#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        bool flag = true;
        int cnt = 0;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == '(')
            {
                cnt++;
            }
            else{
                cnt--;
            }
            if(cnt < 0)
            {
                flag = false;
            }
        }
        cout << (flag && cnt == 0? 1:0) << endl;
    }
}