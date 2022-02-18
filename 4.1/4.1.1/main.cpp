#include <iostream>

using namespace std;

int main() {
    int nnn=1;
    int mmm=1;
    cout << "scan n and m" << endl;
    cin>>nnn>>mmm;
    Rational ration1(nnn,mmm);
    cout << "scan n and m" << endl;
    cin>>nnn>>mmm;
    Rational ration2(nnn,mmm);
    cout << "1 for add 2 for sub 3 for mul 4 for div" << endl;
    Rational result;
    int choose;
    cin>>choose;
    if(choose==1){
        result=ration1.R_add(ration2);
        result.print();
    }
    if(choose==2){
        result=ration1.R_sub(ration2);
        result.print();
    }
    if(choose==3){
        result=ration1.R_mul(ration2);
        result.print();
    }
    if(choose==4){
        result=ration1.R_div(ration2);
        result.print();
    }
    return 0;
}

}