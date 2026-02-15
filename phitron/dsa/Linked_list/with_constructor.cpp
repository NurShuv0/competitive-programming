#include<bits/stdc++.h>
#define sp " "
using namespace std;

class Node {
    public:
        int value;
        Node* next;
    Node(int val)
    {
        this -> value = val;
        this -> next = NULL;
    }
};


int main()
{
    Node a(1000), b(200), c(300);
    a.next = &b;
    b.next = &c;
    cout << a.value <<sp << b.value << sp << c.value<< endl;
    cout << b.next -> value;
}