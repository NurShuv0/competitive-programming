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
vector<int> buildPrefixFunction(const string& p) {
    int m = p.size();
    vector<int> pi(m, 0);
    int j = 0;
    for(int i = 1; i < m; i++) {
        while(j > 0 && p[i] != p[j]) j = pi[j-1];
        if(p[i] == p[j]) j++;
        pi[i] = j;
    }
    return pi;
}
int kmpSearch(const string& s, const string& p) {
    int n = s.size(), m = p.size();
    vector<int> pi = buildPrefixFunction(p);
    int j = 0;
    for(int i = 0; i < n; i++) {
        while(j > 0 && s[i] != p[j]) j = pi[j-1];
        if(s[i] == p[j]) j++;
        if(j == m) return i - m + 1;
    }
    return -1;
}
signed main() {
    let_strt;
    int n; cin >> n;
    string s, t; cin >> s >> t;
    string doubled_s = s + s;
    int pos = kmpSearch(doubled_s, t);
    if(pos == -1) {
        cout << -1 << nl;
    } else {
        cout << (n - pos) % n << nl;
    }
    return 0;
}