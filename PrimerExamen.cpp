#include <iostream>
using namespace std;

    int arreglo[]={};
    int dato=0;
    int *puntero =& arreglo[0];

int main(){
    int forma =0;
    int aux;
    for(int i=0; i<6; i++){
    cout << "Introdusca valor: ";
        cin >> arreglo[i];
        cout << endl;
    }


    cout << "Como mostar ultimo-primero(1) o primero-ultimo(2): ";
        cin>>forma;
        if(forma==1){
                for(int i=0; i<6; i++){
                    *puntero++;
                }
        puntero--;
    cout << endl;
    for(int i=0; i<6; i++){
    cout << "Valor: " << *puntero--;
    cout << endl;
    }
        }else{

    for(int i=0; i<6; i++){
    cout << "Valor: " << *puntero++;
    cout << endl;
        }


    }




    return 0;
}
