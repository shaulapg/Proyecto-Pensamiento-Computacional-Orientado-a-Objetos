/**
 * Proyecto Flujo de dinero de una tienda
 * Shaula Suhail Paz Garay
 * A01712013
 * 29/Nov/2023
*/

#ifndef FONDO_H
#define FONDO_H

//Biblioteca
#include <iostream>

//Declaracion de clase agregacion de Jefe: fondo
class Fondo{
    private:
    //Declaracion del atributo: float cantidad (cantidad que se encuentra en el fondo)
    float cantidad;

    public:
    /**Constructor default de fondo
     * @param
     * @return objeto Fondo
    */
    Fondo(): cantidad(0){};
    /**Constructor de fondo con parametros
     * @param float cant: cantidad
     * @return objeto Fondo
    */
    Fondo(float cant): cantidad(cant){};

    //Metodo get de cantidad
    float get_cantidad();
    //Metodo set de cantidad
    void set_cantidad(float);
    //Metodo para ingresar una cantidad al fondo
    void ingreso(float);
    //Metodo para retirar una cantodad del fondo
    void retiro(float);
};

/**Getter de cantidad en el fondo
 * @param
 * @return float cantidad
*/
float Fondo::get_cantidad(){
    return cantidad;
}

/**Setter cantidad en el fondo
 * @param float cantidad
 * @return
*/
void Fondo::set_cantidad(float cant){
    cantidad = cant;
}

/**Metodo ingresar dinero al fondo
 * @param float ingreso
 * @reutn
*/
void Fondo::ingreso(float ing){
    cantidad = cantidad + ing;
}

/**Metodo retirar dinero del fondo
 * @param float retiro
 * @return
*/
void Fondo::retiro(float ret){
    cantidad = cantidad - ret;
}

//De FONDO_H
#endif