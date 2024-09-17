#include <iostream>
#include <stdlib.h>
using namespace std;

struct persona {
    char nombre[20];
    int edad;
}persona1;

int main(){
    cout<<"Ingrese nombre: ";
    cin.getline(persona1.nombre,20,'\n');
    cout<<"Ingrese la edad: ";
    cin>>persona1.edad;

    cout<<"---- imprimiendo datos----"<<endl;
    cout<<persona1.nombre<<endl;
    cout<<persona1.edad<<endl;

    return 0;
}