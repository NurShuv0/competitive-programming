#include<bits/stdc++.h>
#define sp " "
using namespace std;
class Node {
    public:
        int value;
        Node* next;
};
int main()
{
    Node a, b;
    a.value = 10;
    b.value = 20;
    a.next = &b;
    //cout << a.value <<sp << b.value;
    cout << a.next -> value;
}