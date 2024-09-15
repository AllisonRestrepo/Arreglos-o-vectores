// You will be able to know which of the numbers in the vector 
//is equal to the sum of all the other numbers in the vector.
#include <iostream>
using namespace std;
int main(){
    int numero[100],n,suma = 0,contador = 0;
    cout<<"Enter the number of the vector: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<i+1<<") Enter a number: ";cin>>numero[i];
        suma += numero[i];
    }
    for(int i=0;i<n;i++){
        if(numero[i] == (suma-numero[i])){
            cout<<"Sum: "<<numero[i];
            contador ++;
        }
        }
        if(contador == 0){
        cout<<"There's any sum"<<endl;
        }
        
    return 0;
}