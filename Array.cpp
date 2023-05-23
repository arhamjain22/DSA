#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    if (n1 == n2){
        n1=n1+n2;
        n1=3*n1;
        cout<<"Value"<<n1;
    }
    else{
        cout<<"value "<<n1+n2;
    }

    return 0;
}