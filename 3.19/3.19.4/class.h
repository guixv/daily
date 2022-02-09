//
// Created by dell on 2019/3/25.
//

#ifndef INC_3_19_4_CLASS_H
#define INC_3_19_4_CLASS_H

class Node{
private:
    int M;
    static int C;
public:
    Node(int n=0);
    ~Node();
    void print();
    friend void showCounter(Node &A);
};

#endif //INC_3_19_4_CLASS_H
