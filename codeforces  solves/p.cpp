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
#define best LLONG_MAX
#define wrst LLONG_MIN
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;

signed main() {
    let_strt;
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b(m), c(m);
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> c[i];
        }
        vector<pair<int, int>> monsters(m), other;
        for (int i = 0; i < m; i++) {
            monsters[i] = {b[i], c[i]};
        }
        sort(all(monsters));
        priority_queue<int, vector<int>, greater<int>> swords;
        for (int i = 0; i < n; i++) {
            swords.push(a[i]);
        }
        int ans = 0;
        for (int i = 0; i < m; i++) {
            int life = monsters[i].first;
            int reward = monsters[i].second;
            if(reward == 0)
            {
                other.push_back(monsters[i]);
                continue;
            }
           // cout << life <<" " << reward << endl;
            vector<int> temp;
            bool found = false;
            //cout << ans << endl;
            while (!swords.empty()) {
                int sword = swords.top();
                //cout << sword << endl;
                swords.pop(); 
                if (sword >= life) {
                    ans++;
                    found = true;
                    if (reward > 0) {
                        swords.push(max(sword, reward));
                    }  
                    for (int s : temp) {
                        swords.push(s);
                    }
                    break;
                } else {
                    temp.push_back(sword);
                }
            }
            
            if (!found) {
                for (int s : temp) {
                    swords.push(s);
                }
            }
            //cout << ans << endl;
        }
        sort(all(other));
        for(int i = 0; i < other.size(); i++)
        {
            while(!swords.empty())
            {
                int srd = swords.top();
                swords.pop();
                if(srd >= other[i].first)
                {
                    ans++;
                    break;
                }
            }
        }
        cout << ans << nl;
    }
    return 0;
}