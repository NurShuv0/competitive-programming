#include <bits/stdc++.h>
#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define pi 3.14159265358979323846
#define square(n) (n) * (n)
#define cube(n) (n) * (n) * (n)
#define setPrec(n) fixed << setprecision(n)
#define circulate(a, b) (((a % b) + b) % b)
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define cn continue
#define mod 1000000007
#define best INT_MAX
#define wrst INT_MIN
using namespace std;

struct comp {
    bool operator()(int a, int b) {
        return a > b;
    }
};

signed main()
{
    let_strt;
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        priority_queue<int, vector<int>, comp> pq;
        for(int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            pq.push(input);
        }
        int cnt = 0;
        int i = 1;
        while(!pq.empty())
        {
            int x = pq.top(); pq.pop();
            if(x * i > k)
            {
                cnt++;
                i *= 2;
            }
            else break;
        }
        cout << cnt << nl;
    }
}
