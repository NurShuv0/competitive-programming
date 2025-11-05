#include<bits/stdc++.h>
#define nl "\n"
using namespace std;
int main()
{
    double service, water, electricity, gerbage, lift, maid, wifi, gas;
    cout << "Enter the cost of service : ";
    cin >> service;
    cout << nl << "Enter the cost of water : ";
    cin >> water;
    cout << nl << "Enter the cost of electricity : ";
    cin >> electricity;
    cout << nl << "Enter the cost of lift : ";
    cin >> lift;
    cout << nl << "Enter the cost of gerbage bill : ";
    cin >> gerbage;
    cout << nl << "Enter the cost of gas : ";
    cin >> gas;
    cout << nl << "Enter the cost of wifi : ";
    cin >> wifi;
    cout << nl << "Enter the cost of khala bill : ";
    cin >> maid;
    cout << nl;
    double total = service + water + electricity + lift + gerbage + gas + wifi + maid;
    cout << "Total amount is : " << total << nl;
    cout << "Per person amount is = " << ceil(total/(double)8);
}