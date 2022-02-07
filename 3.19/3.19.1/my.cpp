#include <iostream>
#include "my.h"
using namespace std;

A::A()
{
    m_counter++;
}

A::~A()
{
    m_counter--;
}

void A::display()
{
    cout<<"There are: "<<A::m_counter<<" objects of class A.\n";
}

int A::m_counter=0;
