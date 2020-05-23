#include<iostream>
#include"persona.h"
#include<string.h>
using namespace std;

int main(){
    Persona pedro("Alvaro","ticona",18);
    pedro.setNombre("Joel");
    cout<<pedro.getNombre();
    pedro.setApellidos("Motta");
    cout<<pedro.getApellido();
    pedro.setEdad(20);
    cout<<pedro.getEdad();
    return 0;
}