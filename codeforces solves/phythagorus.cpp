#include<bits/stdc++.h>
#define nl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    double h,l;
    cin >> h >> l;
    double height = ((l*l) - (h*h)) / (2 * h);
    cout <<fixed<< setprecision(13)<< height << nl;
}