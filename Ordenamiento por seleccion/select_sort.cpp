#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main(){
    int numero,min,aux;
    int a[10];
    srand(time(NULL)); //Numbers random

    for(int i=0 ; i<10 ; i++){
        numero = 1 + rand() % (100-1);
        a[i] = numero;
    }
    cout <<"Arreglo Desordenado:" << endl;

    for(int j=0 ; j<10 ; j++){
        cout << a[j] << " ";
    }
    for(int i=0;i<10-1;i++){
        min=i;
        for(int j=i+1;j<10;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        aux=a[i];
        a[i]=a[min];
        a[min]=aux;
    }
    cout <<"\n\nArreglo Ordenado:" << endl;
    for(int j=0 ; j<10 ; j++){
        cout << a[j] << " ";
    }
    return 0;
}