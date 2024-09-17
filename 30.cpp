#include <iostream>
using namespace std;
int main(){
    int numeros[100][100],filas,columnas;
    cout<<"Ingrese el numero de filas: ";cin>>filas;
    cout<<"Ingrese el numero de columnas: ";cin>>columnas;

    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<"DIgite un numero: ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    }
    if(filas == columnas){
        for(int i=0;i<filas;i++){
            for(int j=0;j<filas;j++){
                if(numeros[i][j]==numeros[j][i]){
                    cout<<"Es simetrica";
                }
            }
        }
    }
    else{
        cout<<"No es simetrica.";
    }
    return 0;
}