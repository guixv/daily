#include <iostream>

using namespace std;

int main()
{
    int rmb=100;
    int a,b,c;
    for(a=0;a<=20;a++)
        for(b=0;b<=50;b++){
            if((a*5+b*2)<=100){
                c=100-5*a-2*b;
                cout<<"\t 1 yuan equal to "<<a<<"*5 cent +"<<b<<"*2 cent +"<<c<<"cent"<<endl;
            }
        };
    return 0;
}
