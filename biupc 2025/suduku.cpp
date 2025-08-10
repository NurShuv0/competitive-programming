#include <bits/stdc++.h>
#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define PI 3.14159265358979323846
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define cn continue
#define mod 1000000007
#define best INT_MAX
#define wrst INT_MIN
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;
signed main()
{
    let_strt;
    int arr[9][9];
    for(int i = 0; i < 9; i++)
    	for(int j = 0; j < 9; j++)
    	{
    		cin >> arr[i][j];
    	}
    for(int i = 0; i < 9; i++)
    {
    	int sum = 0;
    	for(int j = 0; j < 9; j++)
    	{
    		// if((arr[i][j] == arr[i][j+1]) || (arr[i][j] == arr[]))
    		sum += arr[i][j];
    	}
    	if(sum != 45)
    	{
    		cout << "NO" << nl;
    		return 0;
    	}
 
    }
    for(int i = 0; i < 9; i++)
    {
    	int sum = 0;
    	for(int j = 0; j < 9; j++)
    	{
    		sum += arr[j][i];
 
    	}
    	if(sum != 45)
    	{
    		cout << "NO" << nl;
    		return 0;
    	}
    }
    cout << "YES" << nl;
}