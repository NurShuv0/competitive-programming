#include <bits/stdc++.h>

using namespace std;

int main(){

    int n , k;
    cin >> n >> k;
    vector <int> a(n);
    for (auto & c : a){
        cin >> c;
    }
    set <int> s;
    for (int i = 0; i < n; i++){
        s.insert(a[i] % k);
    }
    int sum = accumulate(a.begin() , a.end() , 0);
    s.insert(sum % k);
    cout << int(s.size()) << endl;
    for (auto c : s){
        cout << c <<" ";
    }
}
