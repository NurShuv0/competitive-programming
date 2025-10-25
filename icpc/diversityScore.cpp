#include <bits/stdc++.h>

using namespace std;

int main() {
    int n , k;
    cin >> n >> k;
    map <int , int> M;
    map <int , bitset<200005>> B;
    while (k--) {
    	int x , y;
    	cin >> x >> y;
    	if (M.count(x)) {
            int s = M[x];
            B[s][x] = 0;
            B[s + y].set(x);
    	} else {
             M[x] += y;
             B[y].set(x);
    	}
    	if (M.size() != n) {
    		cout << B.size() + 1 << "\n";
    	} else {
    		cout << B.size() << "\n";
    	}
    }
    return 0;


}