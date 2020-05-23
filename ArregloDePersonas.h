#include<iostream>
#include"persona.h"
using namespace std;
class ArregloDePersonas{
public:
    Persona *persona;
    int tam;
public:
    ArregloDePersonas(const Persona personas[], const int tam);
    ArregloDePersonas(const ArregloDePersonas &o);
    void redimensionar(int n);
    void push_back(const Persona &p);
    void insert(const int posicion, const Persona &p);
    void remove(const int pos);
    const int getSize() const;
    void clear();
    ~ArregloDePersonas();
};
ArregloDePersonas::ArregloDePersonas(const Persona personas[], const int tam){
    persona=new Persona[tam];
    this->tam=tam;
    for(int i=0;i<tam;i++)
        persona[i]=personas[i];
}
ArregloDePersonas::ArregloDePersonas(const ArregloDePersonas &o){
    this->persona=new Persona[o.tam];
    this->tam=o.tam;
    for(int i=0;i<tam;i++)
        persona[i]=o.persona[i];
}
void ArregloDePersonas::redimensionar(int n){
    Persona *aux = new Persona[n];
    for(int i = 0; i < n ; i++){
        aux[i] = this->persona[i];
    }
    delete[] persona;
    persona = aux;
    tam=n;
}
void ArregloDePersonas::push_back(const Persona &p){
    (this->redimensionar(tam+1));
    this->persona[tam-1]=p;
}
void ArregloDePersonas::insert(const int posicion, const Persona &p){
    this->redimensionar(tam+1);
    for(int i=tam-1;i>posicion;i--)
        persona[i]=persona[i-1];
    persona[posicion]=p;
}
void ArregloDePersonas::remove(const int pos){
    for(int i=pos;i<tam;i++)
        persona[i]=persona[i+1];
    this->redimensionar(tam-1);
}
const int ArregloDePersonas::getSize() const{
    return this->tam;
}
void ArregloDePersonas::clear(){
    Persona vacio;
    for(int i=0;i<tam;i++)
        persona[i]=vacio;
    this->tam=0;
    cout<<"Funcion clear completada";
}
ArregloDePersonas::~ArregloDePersonas(){
    cout<<"Destructor invocado";
    delete[] persona;
}