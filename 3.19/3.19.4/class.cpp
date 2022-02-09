#include <iostream>
#include "class.h"

using namespace std;

int Node::C=0;

Node::Node(int n) {
    C++;
    this->M=n;
}

Node::~Node() {
    C--;
}

void Node::print() {
    cout<<"M="<<M<<endl;
}

void showCounter(Node &A){
    cout<<"counter="<<A.C<<endl;
}

