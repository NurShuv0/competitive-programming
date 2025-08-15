#include<bits/stdc++.h>
using namespace std;
int main()
{
    str str;
    cin>>str;
    set<char>nur;
    for(int i=0;i<str.size();i++)
    {
        nur.insert(str[i]);
    }
  //  for(auto x:nur)
  //  {
  //      cout<<x<<" ";
  //  }


    if(nur.size()%2!=0)
    {
        cout<<"IGNORE HIM!";
    }
    else
    {
        cout<<"CHAT WITH HER!";
    }
}
