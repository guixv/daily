#include <iostream>

using namespace std;

void swap1(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a,b;
    cout << "input" << endl;
    cin>>a>>b;
    int &m=a;
    int &n=b;
    swap1(m,n);
    cout<<a<<" "<<b<<endl;
    return 0;
}
