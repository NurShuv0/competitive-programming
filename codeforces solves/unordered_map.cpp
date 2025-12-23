#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> um;
    um[2] = "two";
    um[1] = "one";
    um[3] = "three";

    for (auto& p : um) {
        cout << p.first << ": " << p.second << endl;
    }
}
