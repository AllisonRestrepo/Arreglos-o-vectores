//You can enter 2 vectors that are multiplied by two
#include <iostream>
using namespace std;
int main(){
    int vector1[] = {1,2,3,4,5};
    int vector2[5];
    for(int i=0;i<5;i++){
        vector2[i] = vector1[i]*2;
    }
    for(int i=0;i<5;i++){
        cout<<vector2[i]<<endl;
    }
    return 0;
}