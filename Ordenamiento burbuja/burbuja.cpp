#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main(){
    int numero,min,aux;
    int a[10];
    srand(time(NULL));

    for (int i=0 ; i<10 ; i++){
        numero = 1 + rand() % (100-1);
        a[i] = numero;
    }
    cout <<"Arreglo desordenado: " << endl;

    for(int j=0 ; j<10 ; j++){
        cout << a[j] << " ";
    }

    for(int i=0 ; i<10 ; i++){
        for(int j=0 ; j<10 ; j++){
            if(a[j+1] < a[j] ){
                aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
            }
        }
    }

    cout <<"\n\nArreglo Ordenado:" << endl;
    for(int j=0 ; j<10 ; j++){
        cout << a[j] << " ";
    }
    return 0;

}