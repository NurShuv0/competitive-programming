#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,x=0;
    cin>>n;
    str s;
    if(n>=1 && n<=150)
    {
         while(n--)
    {

        for(int i=0; i<3; i++)
        {
            cin>>s[i];
        }
        for(int i=0; i<3; i++)
        {
            if(s[i]=='+' || s[i]=='X' )
            {
                if(s[i+1]=='+')
                {
                    if(s[i+2]=='X' || s[i+2]=='+')
                        x++;
                }

            }
        }
        for(int i=0; i<3; i++)
        {
            if(s[i]=='-')
            {
                if(s[i+1]=='-')
                {
                    if(s[i+2]=='X')
                        x--;
                }

            }
            else if(s[i]=='X')
            {
                if(s[i+1]=='-')
                {
                    if(s[i+2]=='-')
                    {
                        x--;
                    }
                }

            }
        }


    }
    }


    cout<<x<<nl;

}

