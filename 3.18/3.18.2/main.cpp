#include <iostream>

using namespace std;


class Rational
{
public:
    Rational(int nn=1,int mm=1){
        n=nn;
        m=mm;
    };
    Rational R_add(Rational &A);
    Rational R_sub(Rational &A);
    Rational R_mul(Rational &A);
    Rational R_div(Rational &A);
    void print();
private:
    void simple(){
    for(int i=0;i<n&&i<m;i++){
        if(n%i!=n&&m%i!=m){
            n/=i;
            m/=i;
        }
    }
    };
    int m;
    int n;
};

Rational Rational::R_add(Rational &A){
    Rational ration(n*A.m+A.n*m,m*A.m);
    simple();
    return ration;
};

Rational Rational::R_sub(Rational &A){
    Rational ration(n*A.m-A.n*m,m*A.m);
    simple();
    return ration;
};

Rational Rational::R_mul(Rational &A){
    Rational ration(n*A.n,A.m*m);
    simple();
    return ration;
};

Rational  Rational::R_div(Rational &A){
    Rational ration(n*A.m,A.n*m);
    simple();
    return ration;
};

void Rational::print(){
    cout<<n<<"/"<<m<<endl;
}


int main()
{
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
