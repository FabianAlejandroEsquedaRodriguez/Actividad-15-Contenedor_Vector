#include <iostream>
#include <vector>//Incluimos la clase vector
#include <stdlib.h>

using namespace std;

int main(){
    vector<string> cadenas;//Creamos un vector de strings
    string opc;

    while(true){

        cout<<"1. Agregar al final"<<endl;
        cout<<"2. Mostrar"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"\nDigita una opcion: ";
        getline(cin, opc);
        system("cls");

        if(opc == "1"){
            string str;

            cout<<"Digita una cadena: "; 
            getline(cin, str);

            cadenas.push_back(str);//Este metodo agrega elementos al final
        }
        else if(opc == "2"){
            for(size_t i=0; i<cadenas.size(); i++){//size() es un metodo que devuelve la cantidad de elementos del vector
                cout<<cadenas[i]<<" , ";
            }
            cout<<endl;
        }
        else if(opc == "0"){
            break;//Rompemos el ciclo while
        }
        
        cout<<endl<<endl;
        system("pause"); system("cls");
    }


    return 0;
}