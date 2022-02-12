#include <iostream>
#include "class.h"

using namespace std;


int main() {
    calculator a(10);
    calculator b(5);
    add(a,b);
    sub(a,b);
    div(a,b);
    mul(a,b);

    return 0;
}