#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    int number;
    cout << "input student's number" << endl;
    cin>>number;
    double pussibility=1;
    for(int i=0;i<number;i++){
        pussibility*=(365.0-i)/365.0;
    }
    cout<<"the possibility is"<<pussibility<<endl;
    cout<<"number:"<<endl;
    cin>> number;
    srand((unsigned)time(NULL));
    int arr[number];
    int day[365];
    for(int i=0;i<number;i++)
        arr[i]=(rand()%365)+1;
    for(int i=0;i<number;i++){
        for(int j=1;j<=365;j++){
            if(arr[i]==j)
                day[j-1]++;
        }
    }
    int sum;
    for(int j=1;j<=365;j++){
            if(day[j-1]>1)
                sum+=day[j-1];
        }
        pussibility=(double)sum/number;
        cout<<pussibility<<endl;
    return 0;
}
