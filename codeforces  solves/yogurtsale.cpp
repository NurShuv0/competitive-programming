#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    int tt;
    cin >> tt;
    while(tt--){
       int n,a,b;
       cin >> n >> a >> b;
       int d=n/2;
       int ans=0;
       if(n%2==0){
          cout << min(b*d,n*a) <<"\n";
       }
       else{
          cout << min((b*d)+a,n*a) <<"\n";
       }
    }
 
    return 0;
}