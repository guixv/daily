#include <iostream>
#include "class.h"

using namespace std;


int main() {
    Node a(1);
    showCounter(a);
    Node b;
    showCounter(b);
    Node c(5);
    showCounter(c);
    a.print();
    b.print();
    c.print();
    return 0;
}