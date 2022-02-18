#include "Rational.h"
#include <iostream>

using namespace std;

Rational::Rational(int nn=1, int mm=1) {
    n=nn;
    m=mm;
}

void Rational::print() {
    cout<<"result="<<n<<"/"<<m<<endl;
}

Rational& Rational::R_add(Rational &A) {
    Rational ration(n*A.m+A.n*m,m*A.m);
    simple();
    return *this;
}

Rational& Rational::R_sub(Rational &A) {
    Rational ration(n*A.m-A.n*m,m*A.m);
    simple();
    return *this;
}

Rational& Rational::R_mul(Rational &A) {
    Rational ration(n*A.n,A.m*m);
    simple();
    return *this;
}

Rational& Rational::R_div(Rational &A) {
    Rational ration(n*A.m,A.n*m);
    simple();
    return *this;
}

void Rational::simple() {
    for(int i=0;i<n&&i<m;i++){
        if(n%i!=n&&m%i!=m){
            n/=i;
            m/=i;
        }
    }
}

