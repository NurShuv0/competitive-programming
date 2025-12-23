#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    int n = a.size();
    vector<int> prefix(n);
    prefix[0] = a[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + a[i];
    }
    cout << "Prefix sum array: ";
    for (int i = 0; i < n; i++) {
        cout << prefix[i] << " ";
    }
    cout << endl;
    
    int l = 1, r = 3;
    int range_sum = prefix[r] - (l > 0 ? prefix[l - 1] : 0);
    cout << "Sum from index " << l << " to " << r << " = " << range_sum << endl;

    return 0;
}
