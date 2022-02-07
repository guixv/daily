#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    Point p(1,2),q(3,4) ;
    p.fun(q) ;
    q.fun(&q) ;
    return 0;
}