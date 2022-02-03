#include <iostream>

using namespace std;

int main()
{
    int n;
    int a;
    int sum=0;
    cout << "input length of your data" << endl;
    cin>>n;
    int *arr = new int[n];
    cout<<"input your data"<<endl;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
        *(arr+i)=a;
    };
    int maxi=*arr,mini=*arr;
    for(int i=0;i<n;i++){
        if(*(arr+i)>=maxi)
            maxi=*(arr+i);
        if(*(arr+i)<=mini)
            mini=*(arr+i);
    }
    cout<<"sum ="<<sum<<endl;
    cout<<"max="<<maxi<<endl;
    cout<<"min="<<mini<<endl;
    delete []arr;
    return 0;
}
