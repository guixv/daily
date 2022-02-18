#include <iostream>
using namespace std;
#ifndef INC_4_1_1_RATIONAL_H
#define INC_4_1_1_RATIONAL_H

class Rational
{
public:
    Rational(int nn=1,int mm=1);​      //constructor
    ​Rational&  R_add(Rational & A);​  //addition
    Rational&  R_sub(Rational & A);​  //substraction
    Rational&  R_mul(Rational & A);​  //multiplication
    Rational&  R_div(Rational & A);​  //division
    ​  void print();​​ //output the result, which should be a reduced form
private:
    void simple( );​   // reduction of a fraction
    int m;            // denominator
    int n;             // numerator
};

#endif //INC_4_1_1_RATIONAL_H
