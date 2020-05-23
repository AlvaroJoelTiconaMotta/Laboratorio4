#include<iostream>
#include"ArregloDePersonas.h"
using namespace std;
int main(){
    Persona persona1("Alvaro","Ticona",18);
    Persona persona2("Shyndell","Cutipa",17);
    Persona persona3("JD","Valdivia",18);
    Persona arreglo[]={persona1,persona2};
    ArregloDePersonas personas(arreglo,2);
    cout<<endl<<personas.getSize();
    personas.push_back(Persona("Rodrigo","Santisteban",18));
    cout<<endl<<personas.getSize()<<endl;
    for(int i=0;i<personas.getSize();i++)
        cout<<personas.persona[i].getApellido()<<endl;
    personas.insert(0,persona3);
    cout<<endl<<personas.getSize();
    for(int j=0;j<personas.getSize();j++)
        cout<<personas.persona[j].getApellido()<<endl;
    personas.remove(2);
    for(int k=0;k<personas.getSize();k++)
        cout<<personas.persona[k].getApellido()<<endl;
    cout<<personas.getSize();
    personas.clear();
    for(int l=0;l<4;l++)
        cout<<personas.persona[l].getApellido()<<endl;
    cout<<personas.getSize();
    return 0;
}