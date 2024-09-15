//you will be able to enter 2 vectors and join them
#include <iostream>
using namespace std;
int main(){
    char vector1[] = {'a','e','i','o','u'};
    char vector2[] = {'b','c','d','f','g'};
    char letras[10];

    for(int i=0;i<5;i++){
        letras[i] = vector1[i];
    }
    for(int i=5;i<10;i++){
        letras[i] = vector2[i-5];
    }
    for(int i=0;i<10;i++){
    cout<<letras[i]<<" ";
    }
    return 0;
}