/**
 * Proyecto Flujo de dinero de una tienda
 * Shaula Suhail Paz Garay
 * A01712013
 * 29/Nov/2023
*/

#ifndef PERSONAS_H
#define PERSONAS_H

//Bibliotecas
#include<string>
#include<iostream>
//Para implementar objetos tipo artículos
#include "articulos.h"
//Para implementar objetos tipo fondo, solo para jefe
#include "fondo.h"

//Cuenta los empleados que se han registrado
int num_emp=1;

/**
 * Clase que hereda a dos mas: Empleados y Jefe
 * Permite guardar los datos de las personas y manejar los articulos, afectando el fondo
*/

//Declaracion de la clase
class Personas{
    private:
    //Declarcion de atributos: string nombre, int contraseña e int codigo
    std::string nombre;
    int contrasena, codigo;

    public:
    /**Constructor default:
     * @param
     * @return objeto Personas
    */
    Personas(): contrasena(0), codigo(0), nombre(""){};
    /**Constructor con entrada de variables
     * @param string nom: nombre, int cont: contrasena, int cod: codigo
     * @return objeto personas
    */
    Personas(std::string nom, int cont, int cod): nombre(nom), contrasena(cont), codigo(cod){};
    
    //Metodos get de los atributos
    std::string get_nombre();
    int get_contrasena();
    int get_codigo();
    //Metodos set de los atributos
    void set_nombre(std::string);
    void set_contrasena(int);
    void set_codigo(int);

    //Metodo para hacer la venta del articulo, afecta el fondo
    void vender(Articulo &a, int); 
    //Metodo para consultar los datos del articulo
    void consultar_articulo(Articulo &a);
};

/**Getter del nombre
 * @param
 * @return string nombre
*/
std::string Personas::get_nombre(){
    return nombre;
}

/**Getter de la contrasena
 * @param
 * @return int contrasena
*/
int Personas::get_contrasena(){
    return contrasena;
}

/**Getter del codigo
 * @param
 * @return int codigo
*/
int Personas::get_codigo(){
    return codigo;
}

/**Setter del nombre
 * @param string nombre
 * @return
*/
void Personas::set_nombre(std::string nom){
    nombre = nom;
}

/**Setter de la contrasena
 * @param int contrasena
 * @return
*/
void Personas::set_contrasena(int cont){
    contrasena = cont;
}

/**Setter del codigo
 * @param int codigo
 * @return
*/
void Personas::set_codigo(int cod){
    codigo = cod;
}

/**Metodo vender
 * @param objeto articulo, int cantidad
 * @return
*/
void Personas::vender(Articulo &a, int cant){
    float vender = a.get_pventa() * cant;
}

/**Metodo consutar articulos
 * @param objeto Articulo
 * @return
*/
void Personas::consultar_articulo(Articulo &a){
    std::cout << "Nombre: " << a.get_nombre() << std::endl;
    std::cout << "Existencias: " << a.get_existencia() << std::endl;
    std::cout << "Precio de compra: " << a.get_pcompra() << std::endl;
    std::cout << "Precio de venta: " << a.get_pventa() << std::endl;
}


//Declaracion de la clase que hereda de Personas: Empleados
class Empleados : public Personas{
    /**Declaracion de atributos:
     * string  turno (turno del empleado: matutino o vespertino). float sueldo (sueldo fijo del empleado)
     * float paga (paga con descuentos y bonos a base del sueldo fijo)
    */
    private:
    std::string turno;
    float sueldo, paga;

    public:
    /**Constructor default:
     * @param
     * @return objeto Empleados
    */
    Empleados(): Personas(), turno(""), sueldo(0), paga(0){};
    /**Constructor con parametros:
     * @param string nom: nombre, string turn: turno, int cont: contrasena), float suel: sueldo
     * @return objeto Empleados
    */
    Empleados(std::string nom, std::string turn, int cont, float suel): Personas(nom, cont, num_emp), turno(turn), sueldo(suel), paga(0){
        //Despues de hacer que el codigo sea el numero de empleados, se aumenta en uno para el siguiente uso
        num_emp = num_emp + 1;
    };

    //Metodos get de los atributos
    std::string get_turno();
    float get_sueldo();
    float get_paga();
    //Metodos set de los atributos
    void set_turno(std::string);
    void set_sueldo(float);
    void set_paga(float);
};

/**Getter de turno
 * @param
 * @return string turno
*/
std::string Empleados::get_turno(){
    return turno;
}

/**Getter de sueldo
 * @param
 * @return float sueldo
*/
float Empleados::get_sueldo(){
    return sueldo;
}

/**Getter de la paga al empleado
 * @param
 * @return float paga
*/
float Empleados::get_paga(){
    return paga;
}

/**Setter del turno
 * @param string turno
 * @return
*/
void Empleados::set_turno(std::string turn){
    turno = turn;
}

/**Setter del sueldo
 * @param float sueldo
 * @return
*/
void Empleados::set_sueldo(float suel){
    sueldo = suel;
}

/**Setter de paga al empleado
 * @param float paga
 * @return
*/
void Empleados::set_paga(float pag){
    paga = pag;
}

//Declaracion de la clase que hereda de Personas: Jefe
class Jefe : public Personas{
    public:
    /**Constructor default:
     * @param
     * @return objeto Jefe
    */
    Jefe(): Personas(){};
    /**Constructor con parametros:
     * @param string nom: nombre, int cont: contrasena, int cod: codigo
    */
    Jefe(std::string nom, int cont, int cod): Personas(nom, cont, cod){};
    //Se agrega el fondo al objeto Jefe
    Fondo fond;

    //Metodo para comprar productos para la tienda, afecta el fondo
    void comprar_productos(Articulo &a, int);
    //Metodo para consultar los datos del empleado
    void consultar_empleado(Empleados &e);
    //Metodo para pagar al empleado, afecta el fondo
    void pagar_empleado(Empleados &e, float, float);
};

/**Metodo para comprar productos a base del objeto y cantidad de articulos a comprar
 * @param objeto Articulo, int productos
 * @return
*/
void Jefe::comprar_productos(Articulo &a, int prod){
    a.set_existencia(a.get_existencia() + prod);
    fond.retiro(a.get_pcompra() * prod);
}

/**Metodo para consultar datos de los empleados
 * @param objeto Empleados
 * @return
*/
void Jefe::consultar_empleado(Empleados &e){
    std::cout << "Nombre: " << e.get_nombre() << std::endl;
    std::cout << "Codigo: " << e.get_codigo() << std::endl;
    std::cout << "Contrasena: " << e.get_contrasena() << std::endl;
    std::cout << "Sueldo: " << e.get_sueldo() << std::endl;
    std::cout << "Turno: " << e.get_turno() << std::endl;
    std::cout << "Paga: " << e.get_paga() << std::endl;
}

/**Metodo para pagar a Empleados
 * @param objeto Empleados, float bono, float descuento
 * @return
*/
void Jefe::pagar_empleado(Empleados &e, float bono, float descuento){
    float pag = e.get_sueldo() + bono * e.get_sueldo() - descuento * e.get_sueldo();
    e.set_paga(pag);
    fond.retiro(pag);
}

//De PERSONAS_H
#endif