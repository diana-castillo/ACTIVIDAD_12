#include <iostream>
#include "arreglodinamico.h"

using namespace std;

int main() {
    ArregloDinamico arreglo;
    arreglo.insertar_final("Diana");
    arreglo.insertar_final("Diana");
    arreglo.insertar_final("Diana");
    arreglo.insertar_final("Diana");
    arreglo.insertar_final("Diana");
    arreglo.insertar_final("Diana");
    arreglo.insertar_final("Diana");
    arreglo.insertar_final("Diana");
    
    for(size_t i=0; i<arreglo.size(); i++)
        cout<<arreglo[i]<<" ";

    cout<<endl;
    arreglo.insertar_inicio("Rebolledo");
    arreglo.insertar_inicio("Castillo");

    for(size_t i=0; i<arreglo.size(); i++)
        cout<<arreglo[i]<<" ";
    
    cout<<endl<<endl;
}