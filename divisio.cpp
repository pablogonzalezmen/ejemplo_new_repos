#include<iostream>
using namespace std;
int main(){
    float a, b, c, result;
    cout<<"ingrese el valor de a:\n";
    cin>>a;
    cout<<"ingrese el valor de b:\n";
    cin>>b;
    cout<<"ingrese el valor de c:\n";
    cin>>c;

    result = (a + b) / c;

    cout<<"su resultado es:\n"<<result<<endl;
    return 0;
}