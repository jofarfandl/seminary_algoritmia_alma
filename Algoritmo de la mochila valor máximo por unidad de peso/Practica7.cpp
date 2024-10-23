#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

float valpes(float copia[]){
    float z=0;
    for(int i=0;i<5;i++){
        if(copia[i]>z){
            z=copia[i];
        }
    }
    return z;
}

int main(){
    int n=5, W=100,peso=0;
    float val, pes;
    float w[]= {10,20,30,40,50}, v[]={20,30,66,40,60};
    float entre[5], copia[5];
    int y;
    for(int i=0;i<5;i++){
        entre[i]=(v[i]/w[i]);
        copia[i]=entre[i];
    }
    float x[]={0,0,0,0,0};
    cout<<"\n\t--VALOR ENTRE PESO--\n";
    while(peso<W){
        float z=valpes(copia);
        for(int i=0;i<5;i++){
            if(copia[i]==z){
                copia[i]=-1;
                y=i;
            }
        }
        if(peso+w[y]<=W){
            peso+=w[y];
            x[y]=1;
        }else{
            x[y]=(W-peso)/w[y];
            peso=W;
        }
    }
    cout<<"\nObjetos seleccionados: \n";
    for(int i=0;i<n;i++){
        cout<<x[i]<<"-";
    }
    cout<<endl<<endl;
        for(int i=0;i<n;i++){
        val+=x[i]*v[i];
    }
    cout<<"Valor de la mochila: "<<val<<endl<<endl;
    for(int i=0;i<n;i++){
        pes+=x[i]*w[i];
    }
    cout<<"Peso de la mochila: "<<pes<<endl;
    return 0;
}