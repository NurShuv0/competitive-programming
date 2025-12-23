#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=3,a,b,c;
    int arr1[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }



        if(arr1[0]!=arr1[1] && arr1[0]!=arr1[2] )
        {
            cout<<arr1[0]<<nl;

        }

         else if(arr1[1]!=arr1[0] && arr1[1]!=arr1[2])
        {
           cout<<arr1[1]<<nl;

        }
          else if(arr1[2]!=arr1[0] && arr1[2]!=arr1[1])
        {
           cout<<arr1[2]<<nl;

        }





    }
  /*  for(int i=0; i<n; i++)
    {

    }
    for(int i=0; i<n; i++)
    {

    }*/






