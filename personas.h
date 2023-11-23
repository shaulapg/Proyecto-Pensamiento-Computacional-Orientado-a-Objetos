#ifndef PERSONAs_H
#define PERSONAs_H

#include<string>
#include<iostream>
#include "articulos.h"
#include "fondo.h"

int num_emp=1;

class Personas{
    private:
    std::string nombre;
    int contrasena, codigo;

    public:
    Personas(): contrasena(0), codigo(0), nombre(""){};
    Personas(std::string nom, int cont, int cod): nombre(nom), contrasena(cont), codigo(cod){};
    
    std::string get_nombre();
    int get_contrasena();
    int get_codigo();
    void set_nombre(std::string);
    void set_contrasena(int);
    void set_codigo(int);

    void vender(Articulo &a, int);
    void consultar_articulo(Articulo &a);
};

std::string Personas::get_nombre(){
    return nombre;
}

int Personas::get_contrasena(){
    return contrasena;
}

int Personas::get_codigo(){
    return codigo;
}

void Personas::set_nombre(std::string nom){
    nombre = nom;
}

void Personas::set_contrasena(int cont){
    contrasena = cont;
}

void Personas::set_codigo(int cod){
    codigo = cod;
}

void Personas::vender(Articulo &a, int cant){
    float vender = a.get_pventa() * cant;
}

void Personas::consultar_articulo(Articulo &a){
    std::cout << "Nombre: " << a.get_nombre() << std::endl;
    std::cout << "Existencias: " << a.get_existencia() << std::endl;
    std::cout << "Precio de compra: " << a.get_pcompra() << std::endl;
    std::cout << "Precio de venta: " << a.get_pventa() << std::endl;
}

class Empleados : public Personas{
    private:
    std::string turno;
    float sueldo, paga;

    public:
    Empleados(): Personas(), turno(""), sueldo(0), paga(0){};
    Empleados(std::string nom, std::string turn, int cont, float suel): Personas(nom, cont, num_emp), turno(turn), sueldo(suel), paga(0){
        num_emp = num_emp + 1;
    };

    std::string get_turno();
    float get_sueldo();
    float get_paga();
    void set_turno(std::string);
    void set_sueldo(float);
    void set_paga(float);
};

std::string Empleados::get_turno(){
    return turno;
}

float Empleados::get_sueldo(){
    return sueldo;
}

float Empleados::get_paga(){
    return paga;
}

void Empleados::set_turno(std::string turn){
    turno = turn;
}

void Empleados::set_sueldo(float suel){
    sueldo = suel;
}

void Empleados::set_paga(float pag){
    paga = pag;
}

class Jefe : public Personas{
    public:

    Jefe(std::string nom, int cont, int cod): Personas(nom, cont, cod){};
    Fondo fond;

    void comprar_productos(Articulo &a, int);
    void consultar_empleado(Empleados &e);
    void pagar_empleado(Empleados &e, float, float);
};

void Jefe::comprar_productos(Articulo &a, int prod){
    a.set_existencia(a.get_existencia() + prod);
    fond.retiro(a.get_pcompra() * prod);
}

void Jefe::consultar_empleado(Empleados &e){
    std::cout << "Nombre: " << e.get_nombre() << std::endl;
    std::cout << "Codigo: " << e.get_codigo() << std::endl;
    std::cout << "Contrasena: " << e.get_contrasena() << std::endl;
    std::cout << "Sueldo: " << e.get_sueldo() << std::endl;
    std::cout << "Turno: " << e.get_turno() << std::endl;
    std::cout << "Paga: " << e.get_paga() << std::endl;
}

void Jefe::pagar_empleado(Empleados &e, float bono, float descuento){
    float pag = e.get_sueldo() + bono * e.get_sueldo() - descuento * e.get_sueldo();
    e.set_paga(pag);
    fond.retiro(pag);
}

#endif