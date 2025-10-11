#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;
        vector <int> a(n);
        list <int> L;
        for (auto & c : a){
            cin >> c;
            L.push_back(c);
        }
        L.sort();
        for (int i = 0; i < n; i++){
           if (a[i] != L.front()){
               a[i] = L.front();
               L.pop_front();
           }else {
               a[i] = L.back();
               L.pop_back();
           }
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " \n"[i == n - 1];
        }
    }
    return 0;
}
