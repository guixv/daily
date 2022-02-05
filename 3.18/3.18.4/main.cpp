#include <iostream>
#include<cstring>

using namespace std;

class Student{
public:
    void read_name(){
        cout<<name<<endl;
    }
    void read_age(){
        cout<<age<<endl;
    }
    void setName(char *n){
        strcpy(name,n);
    }
    void setAge(double a){
        age=a;
    }
    bool operator==(Student &A){
        if(age==A.age)
            return true;
            else
        return false;
    }
    bool operator!=(Student &A){
        if(age!=A.age)
            return true;
            else
        return false;
    }


    char name[20];
    double age;
};

ostream & operator<<(ostream &out, Student &A){
  out<<A.name<<A.age<<endl;
}

int main()
{
    cout << "number of your team" << endl;
    int number;
    char name[20];
    double age;
    cin>>number;
    Student stu[number];
    for(int i=0;i<number;i++){
            cin>>name>>age;
        stu[i].setName(name);
        stu[i].setAge(age);
    }
    cout<<"select age read"<<endl;
    int choose;
    cin>>choose;
    stu[choose-1].read_age();
    cout<<"select name read"<<endl;
    cin>>choose;
    stu[choose-1].read_name();
    cout<<stu[choose-1];
    return 0;
}
