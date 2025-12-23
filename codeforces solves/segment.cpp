#include <bits/stdc++.h>

using namespace std;

class ST{
    public:
    int n , bit;
    vector <int> S;
    ST() {
        this -> n = 0;
    }
    ST(int n) {
       this -> n = n;
       S.resize(4 * n , 0);
    }
    void build(int start , int end , int node , int s , vector <int> & a){
         if (start == end){
             S[node] = a[start];
             bit = s;
             return;
         }
         int mid = (start + end) / 2;
         build(start , mid , 2 * node + 1 , s ^ 1 , a);
         build(mid + 1 , end , 2 * node + 2 , s ^ 1 , a);
         if (bit != s){
             S[node] = S[2 * node + 1] | S[2 * node + 2];
         } else {
              S[node] = S[2 * node + 1] ^ S[2 * node + 2];
         }
    }
     void update(int start , int end , int node , int s , int x , int r){
         if (start == end){
             S[node] = r;
             bit = s;
             return;
         }
         int mid = (start + end) / 2;
         if (x <= mid){
             update(start , mid , 2 * node + 1 , s ^ 1 , x , r);
         }
         else {
             update(mid + 1, end , 2 * node + 2 , s ^ 1 , x , r);
         }
         if (bit != s){
             S[node] = S[2 * node + 1] | S[2 * node + 2];
         } else {
              S[node] = S[2 * node + 1] ^ S[2 * node + 2];
         }
    }
    void build(vector <int> & a){
         build(0 , n - 1 , 0 , 0 , a);
    }
    void update(int x , int r){
         update(0 , n - 1 , 0 , 0 , x , r);
    }

};
int main() {
    int n , q;
    cin >> n >> q;
    n = pow(2 , n);
    vector <int> a(n);
    for (auto & c : a) {
        cin >> c;
    }
    ST tree(n);
    tree.build(a);
    while (q--){
        int x , r;
        cin >> x >> r;
        tree.update(x - 1 , r);
        cout << tree.S[0] << "\n";
        
    }
    return 0;

}