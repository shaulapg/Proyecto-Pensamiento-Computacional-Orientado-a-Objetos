#include <string>

class Jefe{
    private:
    std::string nombre;
    int codigo, contrasena;
    float ganancias;
    // Aunque ganancias no sea propiamente un atributo de jefe, se incluye porque este es el unico usuario que las controla

    public:
    Jefe(): nombre(""), codigo(0), contrasena(0), ganancias(0){};
    Jefe(std::string nom, int cod, int cont, float gan): nombre(nom), codigo(cod), contrasena(cont), ganancias(gan){};

    std::string get_nombre();
    int get_codigo();
    int get_contrasena();
    float get_ganancias();

    void set_nombre(std::string);
    void set_codigo(int);
    void set_contrasena(int);
    void set_ganancias(float);
    void retiro(float ret);
    void aumento(float aum);
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

float Jefe::get_ganancias(){
    return ganancias;
}

void Jefe::set_nombre(std::string nom){
    nombre = nom;
}

void Jefe::set_codigo(int cod){
    codigo = cod;
}

void Jefe::set_contrasena(int cont){
    contrasena = cont;
}

void Jefe::set_ganancias(float gan){
    ganancias = gan;
}

void Jefe::retiro(float ret){
    ganancias = ganancias - ret;
}

void Jefe::aumento(float aum){
    ganancias = ganancias + aum;
}