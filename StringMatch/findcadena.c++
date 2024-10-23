#include <iostream>
#include<windows.h>

using namespace std;

int EncontrarCad(char* b, char* a){
    int M = strlen(b);
    int N = strlen(a);
    for (int i=0;i<=N-M;i++){
        int j;
        for (j=0;j<M;j++)
            if (a[i+j] != b[j])
                break;
        if (j==M)
            return i;
    }
    return -1;
}

int main(){
    char a[] = "Abecedario";
    char b[] = "dar";
    int c=EncontrarCad(b, a);
    if(c!=-1){
        int M = strlen(b);
        int N = strlen(a);
        cout<<"A: ";
        for(int i=0;i<N;i++){
            cout<<a[i];
        }
        cout<<"\n\n";
        cout<<"B: ";
        for(int i=0;i<M;i++){
            cout<<b[i];
        }
        cout<<"\n\n";
        cout<<"Coincidencia en el indice: "<<c<<endl;
    }else{
        cout<<"No hubo coincidencias :(\n";
    }
    return 0;
}