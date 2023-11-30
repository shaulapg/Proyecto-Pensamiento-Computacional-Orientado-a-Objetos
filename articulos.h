/**
 * Proyecto Flujo de dinero de una tienda
 * Shaula Suhail Paz Garay
 * A01712013
 * 29/Nov/2023
*/

#ifndef ARTICULOS_H
#define ARTICULOS_H

//Biblioteca
#include <string>

//Declaracion de la clase Articulo que maneja los articulos de la tienda
class Articulo{
    /*Declaracion de los atributos: 
     *string nombre, int existencia, int codigo, int numero de articulo (art)
     *float precio de compra (pcompra), float precio de venta(pventa)
    */
    private:
    std::string nombre;
    int existencia, codigo, art=1;
    float pcompra, pventa;

    public:
    /**Constructor default:
     * @param
     * @return objeto Articulo
    */
    Articulo(): nombre(""), existencia(0), codigo(0), pcompra(0), pventa(0){};
    /**Constructor con parametros
     * @param string nom: nombre, int exs: existencias, float pcomp: precio de compra, float pventa: precio de venta
     * @return objeto Articulo
    */
    Articulo(std::string nom, int exs, float pcomp, float pvent): nombre(nom), existencia(exs), codigo(art), pcompra(pcomp), pventa(pvent){};
    /**Constructor con parametros
     * @param string nom: nombre, float pcomp: precio de compra, float pventa: precio de venta
     * @return objeto Articulo
    */
    Articulo(std::string nom, float pcomp, float pvent): nombre(nom), existencia(0), codigo(art), pcompra(pcomp), pventa(pvent){};

    //Metodos get de los atributos
    std::string get_nombre();
    int get_existencia();
    int get_codprod();
    float get_pcompra();
    float get_pventa();
    //Metodos set de los atributos
    void set_nombre(std::string);
    void set_existencia(int);
    void set_codprod(int);
    void set_pcompra(float);
    void set_pventa(float);
};

/**Getter de nombre
 * @param
 * @return string nombre
*/
std::string Articulo::get_nombre(){
    return nombre;
}

/**Getter de existencia
 * @param
 * @return int existencia
*/
int Articulo::get_existencia(){
    return existencia;
}

/**Getter del codigo del articulo
 * @param
 * @return int codigo
*/
int Articulo::get_codprod(){
    return codigo;
}

/**Getter del precio de compra del articulo
 * @param
 * @return float precio de compra
*/
float Articulo::get_pcompra(){
    return pcompra;
}

/**Getter del precio de venta del articulo
 * @param
 * @return float precio de venta
*/
float Articulo::get_pventa(){
    return pventa;
}

/**Setter del nombre
 * @param string nombre
 * @return
*/
void Articulo::set_nombre(std::string nom){
    nombre = nom;
}

/**Setter de las existencias
 * @param int existencias
 * @return
*/
void Articulo::set_existencia(int exs){
    existencia = exs;
}

/**Setter del codigo del producto
 * @param int codigo
 * @return
*/
void Articulo::set_codprod(int cod){
    codigo = cod;
}

/**Setter del precio de compra
 * @param float precio de compra
 * @return
*/
void Articulo::set_pcompra(float pcomp){
    pcompra = pcomp;
}

/**Setter del precio de venta
 * @param float precio de venta
 * @return
*/
void Articulo::set_pventa(float pvent){
    pventa = pvent;
}

//De ARTICULOS_H
#endif