#include <iostream>
#include "arreglodinamico.h"

using namespace std;

int main() {
    ArregloDinamico<string> arreglo;
    arreglo.insertar_final("Diana");
    arreglo.insertar_final("Fernanda");
    arreglo.insertar_inicio("Rebolledo");
    arreglo.insertar_inicio("Castillo");
    
    cout<<endl;
    for(size_t i=0; i<arreglo.size(); i++)
        cout<<arreglo[i]<<" ";
    cout<<endl<<endl;

    arreglo.insertar("Holi", 2);

     for(size_t i=0; i<arreglo.size(); i++)
        cout<<arreglo[i]<<" ";
    cout<<endl;

    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);

    for(size_t i=0; i<arreglo.size(); i++)
        cout<<arreglo[i]<<" ";
    
    cout<<endl<<endl;
}