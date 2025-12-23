#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[3],cnt=0,cnt1=0,x;
    cin>>n;
    while(n--)
    {
        for(int i=0; i<3; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<3; i++)
        {
            if(arr[i]==1)
            {
                cnt++;
            }
        }
        x=cnt;
        cnt=0;
        if(x>=2)
        {
            cnt1++;
        }


    }
    cout<<cnt1;


}
