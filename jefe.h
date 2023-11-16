#include <string>

class Jefe{
    private:
    std::string nombre;
    int codigo, contrasena;
    float fondo;
    // Aunque fondo no sea propiamente un atributo de jefe, se incluye porque este es el unico usuario que las controla

    public:
    Jefe(): nombre(""), codigo(0), contrasena(0), fondo(0){};
    Jefe(std::string nom, int cont): nombre(nom), codigo(0), contrasena(cont), fondo(0){};

    std::string get_nombre();
    int get_codigo();
    int get_contrasena();
    float get_fondo();

    void set_nombre(std::string);
    void set_contrasena(int);
    void retiro(float ret);
    void aumento(float aum);
    void reinicia_mes(float fon);
    // Ya que al terminar mes se retiran las ganancias y se inicia con un presupuesto, en vez de "set_fondo", hay un termina mes
};

std::string Jefe::get_nombre(){
    return nombre;
}

int Jefe::get_codigo(){
    return codigo;
}

int Jefe::get_contrasena(){
    return contrasena;
}

float Jefe::get_fondo(){
    return fondo;
}

void Jefe::set_nombre(std::string nom){
    nombre = nom;
}

void Jefe::set_contrasena(int cont){
    contrasena = cont;
}

void Jefe::reinicia_mes(float fon){
    fondo = fon;
}

void Jefe::retiro(float ret){
    fondo = fondo - ret;
}

void Jefe::aumento(float aum){
    fondo = fondo + aum;
}