#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;


 for(int i=n;i!=0;i--)
    {

         cin>>str;
         if(str.length()>10)
         {
              int x=str.length();
        cout<<str[0]<<x-2<<str[x-1]<<nl;
         }
         else
         {
             cout<<str<<nl;
         }

    }




}
