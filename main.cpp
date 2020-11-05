#include <iostream>
#include <vector>//Incluimos la clase vector
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main(){
    vector<string> cadenas;//Creamos un vector de strings
    string opc;

    while(true){

        cout<<"1. Agregar al final"<<endl;
        cout<<"2. Mostrar"<<endl;
        cout<<"3. Inicializar"<<endl;
        cout<<"4. Frente"<<endl;
        cout<<"5. Ultimo"<<endl;
        cout<<"6. Ordenar"<<endl;
        cout<<"7. Insertar"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"\nDigita una opcion: ";
        getline(cin, opc);
        system("cls");

        if(opc == "1"){
            string str;

            cout<<"\t\t\tAgregar al final\n\n";
            cout<<"Digita una cadena: "; 
            getline(cin, str);

            cadenas.push_back(str);//Este metodo agrega elementos al final
        }
        else if(opc == "2"){
            cout<<"\t\t\tMostrar los elementos en el vector\n\n\n";
            for(size_t i=0; i<cadenas.size(); i++){//size() es un metodo que devuelve la cantidad de elementos del vector
                cout<<cadenas[i]<<" , ";
            }
            cout<<endl;
        }
        else if(opc == "3"){
            //Lo que va a hacer es crear un vector de tamaño "n" y va a repetir una cadena que digitemos
            size_t n;
            string str;

            cout<<"\t\t\tInicializar el vector\n\n";
            cout<<"Digita el tamaño: "; 
            cin>>n;
            cin.ignore();
            cout<<"Digita la cadena que vas a repetir "<<n<<" veces: ";
            getline(cin, str);

            //Nuestro objeto va a sobreescribir lo que tiene y
            cadenas = vector<string> (n, str);//Va a crear otro vector que tiene tamaño y la cadena a repetir
        }
        else if(opc == "4"){
            if(cadenas.empty()){
                cout<<"La lista esta vacia"<<endl;
            }
            else{
                cout<<"\t\t\tCadena que esta al frente en el vector\n\n";
                cout<<"La cadena que esta al frente es: "<<cadenas.front()<<endl;//Este metodo muestra el primer elemento en el vector
            }
        }
        else if(opc == "5"){
            if(cadenas.empty()){
                cout<<"La lista esta vacia"<<endl;
            }
            else{
                cout<<"\t\t\tCadena que esta al ultimo en el vector\n\n";
                cout<<"La cadena que esta el final es: "<<cadenas.back()<<endl;//Este metodo muestra el ultimo elemento del vector
            }
        }
        else if(opc == "6"){

            cout<<"\t\t\tOrdenando los elementos del vector\n";
            sort(cadenas.begin(), cadenas.end());
            //Este metodo va a ordenar los elementos.
            //El primer parametro es el metodo begin(), que va a regresarnos un apuntador a la primera posicion del vector
            //El segundo parametro es el metodo end(), que nos va a regresar un puntero a la siguiente posicion disponible despues del ultimo elemento 

            //sort(cadenas.begin(), cadenas.end(), greater<string>());//De esta forma va a ordenar de manera descendente
        }
        else if(opc == "7"){
            size_t pos;
            string str;

            cout<<"\t\t\tInsertar una cadena en una posicion valida\n\n";
            cout<<"Digita una posicion: ";
            cin>>pos;
            cin.ignore();
            cout<<"Digita la cadena a insertar: ";
            getline(cin, str);

            if(pos >= cadenas.size()){//Si la posicion es mayor al tamaño del vector
                cout<<"La posicion no es valida";
            }
            else{//Metodo insert() para insertar en una posicion valida
                cadenas.insert(cadenas.begin()+pos, str);//El primer parametro es el apuntador al inicio mas la posicion que queramos
                                                        //Esto va a hacer que begin() se recorra esas posiciones
                                                        //El segundo parametro es el elemento a insertar
            }
        }
        else if(opc == "0"){
            break;//Rompemos el ciclo while
        }
        
        cout<<endl<<endl;
        system("pause"); system("cls");
    }


    return 0;
}