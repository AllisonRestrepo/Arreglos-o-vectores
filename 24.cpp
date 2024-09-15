#include <iostream>
using namespace std;
int main(){
    int vector[100],n;
    cout<<"Ingrese el numero de elementos que tendra el vector: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Digite un numero: ";
        cin>>vector[i];
    }
    for(int i=0;i<n;i++){
        cout<<i<<" -> "<<vector[i]<<endl;
    }




    return 0;
}