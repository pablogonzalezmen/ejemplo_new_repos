//para poder depurar el programa se requiere presionar el debug con f6

#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    float div;
    cout<<"ingrese el valor del primer numero_\n";
    cin>> a;
    cout<<"ingrese el valor del segundo numero_\n";
    cin>> b;
    cout<<"ingrese el valor del tercer numero_\n";
    cin>> c;
    div = ( a + b + c ) / 3;
    cout<<"su promedio es igual a: "<<div<<endl;
    return 0;
}