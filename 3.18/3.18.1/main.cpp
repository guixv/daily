#include <iostream>

using namespace std;


class clock{//定义class
public:
    clock(){
        hour=8;
        minute=0;
        second=0;
        }
    void setHour(int h);
    void setMinute(int m);
    void setSecond(int s);
    void reSet();
    void readTime();
private:
    int hour;
    int minute;
    int second;
};

void clock::setHour(int h){//重设时间，hour
    hour=h;
}

void clock::setMinute(int m){//重设时间，minute
    minute=m;
}

void clock::setSecond(int s){//重设时间，second
    second=s;
}

void clock::reSet(){//初始化
    hour=8;
    minute=0;
    second=0;
}

void clock::readTime(){//显示时间
    cout<<"time:"<<hour<<":"<<minute<<":"<<second<<endl;
}

int main()
{
    clock Clock1;
    Clock1.readTime();
    cout << "choose h,m,s to set time r for reset l for read" << endl;
    while(true){
        char a;
        int change;
        cin>>a;
        if(a=='h'){
            cin>>change;
            Clock1.setHour(change);
        }
        if(a=='m'){
            cin>>change;
            Clock1.setMinute(change);
        }
        if(a=='s'){
            cin>>change;
            Clock1.setSecond(change);
        }
        if(a=='r'){
            Clock1.reSet();
        }
        if(a=='l'){
            Clock1.readTime();
        }
    }
    return 0;
}
