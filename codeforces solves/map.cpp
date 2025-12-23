#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;
    m[2] = "two";
    m[1] = "one";
    m[3] = "three";

    for (auto& p : m) {
        cout << p.first << ": " << p.second << endl;
    }
}
