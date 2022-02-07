#include <iostream>
#include "point.h"

using namespace std;

void Point::fun(Point &p)
{
    x=p.x ;
    y=p.y ;
    cout<< "The fun(Point &p) "<<endl ;
}
void Point::fun (Point *p)
{
    x=p->x ;
    y=p->y ;
    cout<< "Fun (Point *p) "<<endl ;
}