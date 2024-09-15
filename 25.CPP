//  You will be able to see the largest element of the vector.
#include <iostream>
using namespace std;

int main(){
    int numero[100],n, mayor = 0;
    cout<<"Enter the number of the array: ";cin>>n;

    for(int i=0;i<n;i++){
        cout<<i+1<<") "<<"Enter a number: ";
        cin>>numero[i];

        if(numero[i] > mayor){
            mayor = numero[i];
        }
    }
    cout<<"The largest element of the vector: "<<mayor<<endl;


    return 0;
}