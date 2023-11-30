/**
 * Proyecto Flujo de dinero de una tienda
 * Shaula Suhail Paz Garay
 * A01712013
 * 29/Nov/2023
*/

//Bibliotecas
#include <iostream>
#include <string>
//Para implementar objetos tipo Personas
#include "personas.h"
//Para implementar objetos tipo Articulos
#include "articulos.h"

/**Proyecto simulacion de una tienda
 * Objetivo principla: Controlar el flujo de dinero en la tienda a base de:
 * Paga a los empleados
 * Compra y venta de productos
 * Retiros e ingresos de dinero que el jefe decida
 * 
 * El archivo actual se centra en la interaccion con el usuario
*/

/**Declaracion de las variables: string nombre del jefe(nom_j), int contrasena del jefe (cont_j),
 * int comprobador de la constrasena del jefe (contra), int opcion seleccionada en el menu principal (opcion),
 * float opcion seleccionada en el menu de jefe (op), float variable extra (a), float variable extra (b),
 * bool continuar ciclo de menu de jefe (continuar), bool continuar ciclo del menu principal (cont)
*/
std::string nom_j;
int cont_j, contra, opcion, op;
float a, b;
bool continuar;
bool cont;

//Creacion del objeto tipo Articulo: agua
Articulo agua("Botella de agua",50,4.5,7.5);
//Creacion del objeto tipo Empleados: Juan
Empleados Juan("Juan Perez","matutino",1234,5000);

int main(){
    //Ingreso de los datos del jefe:
    std::cout << "Primero ingrese los datos del Jefe" << std::endl;
    //Ingreso del nombre
    std::cout << "Escribe el nombre del jefe: ";
    getline(std::cin,nom_j);
    //Ingreso de la constrasena
    std::cout << "Escribe la contrasena: ";
    std::cin >> cont_j;
    //Creacion del objeto tipo Jefe: usuario
    Jefe usuario(nom_j,cont_j,0);
    //Inicializacion del fondo
    usuario.fond.ingreso(100000);
    std::cout << std::endl;
    //Despliegue de datos del jefe para comprobacion
    std::cout << "Datos del jefe:" << std::endl;
    std::cout << "Nombre: " << usuario.get_nombre() << std::endl;
    std::cout << "Codigo: " << usuario.get_codigo() << std::endl;
    std::cout << "Contrasena: " << usuario.get_contrasena() << std::endl;
    std::cout << std::endl;
    //Establecer variable en true para continuar con el ciclo que sigue en caso de haber salido anteriormente
    cont = true; 
    //Ciclo para ingreso al menu principal
    while (cont == true){
        std::cout << std::endl; 
        //Menu principal
        std::cout << "(Ingresa 0 si deseas salir)" << std::endl;
        std::cout << "Si deseas ingresar como jefe, oprime 1, si deseas ingresar como empleado, ingresa 2: ";
        //Ingreso de opcion elegida
        std::cin >> opcion;
        //Switch para ingresar como empleado, jefe o salir
        switch (opcion){
            //Caso de salir
            case 0:
                cont = false;
            break;
            //Caso de jefe
            case 1:
                std::cout << std::endl; 
                //Ingreso de la contrasena de jefe para poder acceder a las funciones para jefe
                std::cout << "(Ingresa 0 si deseas salir)" << std::endl;
                std::cout << "Ingresar contrasena: ";
                std::cin >> contra;
                std::cout << std::endl;
                //Caso de contrasena correcta
                if (contra == usuario.get_contrasena()){
                    //Establecer variable en true para continuar con el ciclo que sigue en caso de haber salido anteriormente
                    continuar = true;
                    while (continuar == true){
                        //Menu jefe
                        std::cout << std::endl;
                        std::cout << "Bienvenid@ " << usuario.get_nombre() << std::endl;
                        std::cout << "MENU DE JEFE: " << std::endl;
                        std::cout << "1. Consultar empleado" << std::endl;
                        std::cout << "2. Pagar a empleado" << std::endl;
                        std::cout << "3. Retirar dinero" << std::endl;
                        std::cout << "4. Depositar dinero" << std::endl;
                        std::cout << "5. Reiniciar mes" << std::endl;
                        std::cout << "6. Comprar articulos" << std::endl;
                        std::cout << "7. Consultar fondo" << std::endl;                        
                        std::cout << "8. Salir" << std::endl;
                        std::cout << "Ingresa una opcion: ";
                        //Ingreso de opcion elegida
                        std::cin >> op;
                        //Switch para los casos posibles en jefe
                        switch(op){
                            //Caso de consultar datos de empleado
                            case 1:
                                std::cout << std::endl;
                                //Metodo de consulta al empleado
                                usuario.consultar_empleado(Juan);
                            break;
                            //Caso de pagar empleado
                            case 2:
                                Juan.set_paga(Juan.get_sueldo());
                                //Se ingresa el bono del mes para agregar a la paga a base del sueldo
                                std::cout << "Ingrese bono: ";
                                std::cin >> a;
                                //Se ingresa el descuento del mes para restarlo a la paga del sueldo
                                std::cout << "Ingrese descuento: ";
                                std::cin >> b;
                                //Metodo para pagar al empleado
                                usuario.pagar_empleado(Juan,a,b);
                                //Despliegue de la paga
                                std::cout << "Paga total: " << Juan.get_sueldo() + Juan.get_sueldo()*(a-b) << std::endl;
                            break;
                            //Caso para retiro de dinero del fondo
                            case 3:
                                //Ingreso de la cantidad a retirar
                                std::cout << "Ingrese cantidad a retirar: ";
                                std::cin >> a;
                                //Metodo para disminuir el dinero del fondo
                                usuario.fond.retiro(a);
                            break;
                            //Caso para ingreso de dinero al fondo
                            case 4:
                                //Ingreso de la cantidad aumentada
                                std::cout << "Ingrese cantidad a aumentar: ";
                                std::cin >> a;
                                //Metodo para aumentar el dinero al fondo
                                usuario.fond.ingreso(a);
                            break;
                            //Caso para reiniciar el mes, es decir sacar todo el dinero del fondo e ingresar el presupuesto nuevo
                            case 5:
                                //Ingreso del presupuesto nuevo
                                std::cout << "Ingrese cantidad con la que se iniciara el mes: ";
                                std::cin >> a;
                                //Metodo para reiniciar el mes
                                usuario.fond.set_cantidad(a);
                            break;
                            //Caso para comprar producto
                            case 6:
                                //Ingreso de la cantidad a comprar
                                std::cout << "Cantidad a comprar: ";
                                std::cin >> a;
                                //Metodo para aumentar a existencias de productos y retirar dinero usado para la compra
                                usuario.comprar_productos(agua,a);
                            break;
                            //Caso para consultar dinero en el fondo
                            case 7:
                                std::cout << usuario.fond.get_cantidad() << std::endl;
                            break;
                            //Caso para salir del menu de jefe
                            case 8:
                                continuar = false;
                            break;
                            //Caso para opcion inexistente
                            default:
                                std::cout << "Opcion invalida";
                            break;
                        }
                    }
                }
                //Caso para salir del ingreso de contrasena
                else if(contra == 0){
                    cont = false;
                }
                //Caso de constrasena incorrecta
                else
                    std::cout << "Contrasena incorrecta" << std::endl;
            break;
            //Ingreso a funciones de empleado (solo venta de productos)
            case 2:
                //Ingreso de cantidad de productos vendidos
                std::cout << "Cantidad a vender: ";
                std::cin >> a;
                //Metodo para disminuir las existencias del producto
                usuario.vender(agua,a);
                //Metodo para ingresar dinero de la venta al fondo
                usuario.fond.ingreso(agua.get_pventa() * a);
            break;
            //Caso de opcion inexistente
            default:
                std::cout << "Opcion invaida" << std::endl;
        }
    }
}