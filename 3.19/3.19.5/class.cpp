#include <iostream>
#include "class.h"


using namespace std;



calculator::calculator(int a) {
    number=a;
}

void add(calculator &A,calculator &B) {
    cout<<"a+b="<<A.number+B.number<<endl;
}

void sub(calculator &A,calculator &B) {
    cout<<"a-b="<<A.number-B.number<<endl;
}

void div(calculator &A,calculator &B) {
    cout<<"a/b="<<A.number/B.number<<endl;
}

void mul(calculator &A,calculator &B) {
    cout<<"a*b="<<A.number*B.number<<endl;
}



void calculator::printResult() {
    cout<<"number="<<number<<endl;
}

void calculator::setNumber(int a) {
    number=a;
}
//
// Created by dell on 2019/3/25.
//

