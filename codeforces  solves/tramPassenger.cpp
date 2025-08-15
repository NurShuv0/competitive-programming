#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,capacity=0,max_capacity=0;
    cin>>t;
    while(t--){
        cin>> a >> b;
        capacity = (b - a) + capacity;
        max_capacity = max(capacity,max_capacity);
    }
    cout<<max_capacity;
    
}