#include <iostream>
using namespace std;
int main(){
    int numero[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cout<<"Enter a number ["<<i<<"]["<<j<<"]: ";
        cin>>numero[i][j];
        }
    }
    cout<<"\nOriginal\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<numero[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\nMatriz transpuesta\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<numero[j][i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}