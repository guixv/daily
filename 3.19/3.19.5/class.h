//
// Created by dell on 2019/3/25.
//

#ifndef INC_3_19_5_CLASS_H
#define INC_3_19_5_CLASS_H
class calculator{
private:
    int number;
public:
    calculator(int a);
    void printResult();
    void setNumber(int a);
    friend void add(calculator & A,calculator & B);
    friend void sub(calculator & A,calculator & B);
    friend void div(calculator & A,calculator & B);
    friend void mul(calculator & A,calculator & B);
};
#endif //INC_3_19_5_CLASS_H
