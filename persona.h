#include<iostream>
#include<string.h>
using namespace std;
class Persona{
private:
    string nombre;
    string apellido;
    int edad;
public:
    Persona();
    Persona(string nombre,string apellido,int edad);
    Persona(Persona& person);
    string getNombre() const;
    string getApellido() const;
    int getEdad() const;
    void setNombre(const string nombre);
    void setApellidos(const string apellido);
    void setEdad(const int edad);
};
Persona::Persona(){
    nombre="";
    apellido="";
    edad=0;
}
Persona::Persona(string nombre,string apellido,int edad){
    this->nombre=nombre;
    this->apellido=apellido;
    this->edad=edad;
}
Persona::Persona(Persona& person){
    this->nombre=person.nombre;
    this->apellido=person.apellido;
    this->edad=person.edad;
}
string Persona::getNombre() const{
    return this->nombre;
}
string Persona::getApellido() const{
    return this->apellido;
}
int Persona::getEdad() const{
    return this->edad;
}
void Persona::setNombre(const string nombre){
    this->nombre=nombre;
}
void Persona::setApellidos(const string apellido){
    this->apellido=apellido;
}
void Persona::setEdad(const int edad){
    this->edad=edad;
}