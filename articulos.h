#include <string>

#ifndef ARTICULOS_H
#define ARTICULOS_H
class Articulo{
    private:
    std::string nombre;
    int existencia, codigo, art=1;
    float pcompra, pventa;

    public:
    Articulo(): nombre(""), existencia(0), codigo(0), pcompra(0), pventa(0){};
    Articulo(std::string nom, int exs, float pcomp, float pvent): nombre(nom), existencia(exs), codigo(art), pcompra(pcomp), pventa(pvent){};
    Articulo(std::string nom, float pcomp, float pvent): nombre(nom), existencia(0), codigo(art), pcompra(pcomp), pventa(pvent){};

    std::string get_nombre();
    int get_existencia();
    int get_codprod();
    float get_pcompra();
    float get_pventa();

    void set_nombre(std::string);
    void set_existencia(int);
    void set_codprod(int);
    void set_pcompra(float);
    void set_pventa(float);
};

std::string Articulo::get_nombre(){
    return nombre;
}

int Articulo::get_existencia(){
    return existencia;
}

int Articulo::get_codprod(){
    return codigo;
}

float Articulo::get_pcompra(){
    return pcompra;
}

float Articulo::get_pventa(){
    return pventa;
}

void Articulo::set_nombre(std::string nom){
    nombre = nom;
}

void Articulo::set_existencia(int exs){
    existencia = exs;
}

void Articulo::set_codprod(int cod){
    codigo = cod;
}

void Articulo::set_pcompra(float pcomp){
    pcompra = pcomp;
}

void Articulo::set_pventa(float pvent){
    pventa = pvent;
}

#endif