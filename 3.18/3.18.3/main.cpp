#include <iostream>
#include<cstring>

using namespace std;


class library{
public:
    library(){
        name=new char[20];
        name="no name";
    }
    library(char *n="no",int p=0){
        name=new char[20];
        strcpy(name,n);
        page=p;
    }
    library(library& A){
        name=new char[20];
        strcpy(name,A.name);
        page=A.page;
    }
    ~library(){
        cout<<"deleting~~"<<endl;
    }
    void print(){
        cout<<name<<" "<<page<<endl;
    }
private:
    char *name;
    int page;
};


library add_book(){
    cout << "add book" << endl;
    char name[20];
    int page;
    cin>>name>>page;
    library newBook(name,page);
    return newBook;
}

int main()
{
    library book1("abc",12);
    book1.print();
    library *p=new library("new",0);
    *p=add_book();
    p->print();

    delete p;
    book1.print();
    return 0;
}
