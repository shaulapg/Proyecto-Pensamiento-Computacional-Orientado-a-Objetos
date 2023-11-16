#include <iostream>
#include <string>
#include "articulos.h"
#include "empleados.h"
#include "jefe.h"

std::string nom_j;
int cont_j, contra, opcion, op;
float a;
bool continuar;
bool cont;

Articulo agua("Botella de agua",50,4.5,7.5);
Empleados Juan("Juan Perez","matutino",1234,5000);

int main(){
    std::cout << "Primero ingrese los datos del Jefe" << std::endl;
    std::cout << "Escribe el nombre del jefe: ";
    getline(std::cin,nom_j);
    std::cout << "Escribe la contrasena: ";
    std::cin >> cont_j;
    Jefe usuario(nom_j,cont_j);
    std::cout << std::endl;
    std::cout << "Datos del jefe:" << std::endl;
    std::cout << "Nombre: " << usuario.get_nombre() << std::endl;
    std::cout << "Codigo: " << usuario.get_codigo() << std::endl;
    std::cout << "Contrasena: " << usuario.get_contrasena() << std::endl;
    std::cout << std::endl; 
    cont = true;   
    while (cont == true){
        std::cout << std::endl; 
        std::cout << "(Ingresa 0 si deseas salir)" << std::endl;
        std::cout << "Si deseas ingresar como jefe, oprime 1, si deseas ingresar como empleado, ingresa 2: ";
        std::cin >> opcion;
        switch (opcion){
            case 0:
                cont = false;
            break;
            case 1:
                std::cout << std::endl; 
                std::cout << "(Ingresa 0 si deseas salir)" << std::endl;
                std::cout << "Ingresar contrasena: ";
                std::cin >> contra;
                std::cout << std::endl;
                if (contra == usuario.get_contrasena()){
                    continuar = true;
                    while (continuar == true){
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
                        std::cin >> op;
                        switch(op){
                            case 1:
                                std::cout << "Codigo: " << Juan.get_codempleado() << std::endl;
                                std::cout << "Nombre: " << Juan.get_nombre() << std::endl;
                                std::cout << "Turno: " << Juan.get_turno() << std::endl;
                                std::cout << "Sueldo: " << Juan.get_sueldo() << std::endl;
                                std::cout << "Paga: " << Juan.get_paga() << std::endl;
                            break;
                            
                            case 2:
                                Juan.set_paga(Juan.get_sueldo());
                                std::cout << "Ingrese bono: ";
                                std::cin >> a;
                                Juan.bono(a);
                                std::cout << "Ingrese descuento: ";
                                std::cin >> a;
                                Juan.descuento(a);
                                std::cout << "Paga total: " << Juan.get_paga() << std::endl;
                                usuario.retiro(Juan.get_paga());
                            break;

                            case 3:
                                std::cout << "Ingrese cantidad a retirar: ";
                                std::cin >> a;
                                usuario.retiro(a);
                            break;

                            case 4:
                                std::cout << "Ingrese cantidad a aumentar: ";
                                std::cin >> a;
                                usuario.aumento(a);
                            break;

                            case 5:
                                std::cout << "Ingrese cantidad con la que se iniciara el mes: ";
                                std::cin >> a;
                                    usuario.reinicia_mes(a);
                            break;

                            case 6:
                                std::cout << "Cantidad a comprar: ";
                                std::cin >> a;
                                agua.compra(a);
                                usuario.retiro(agua.get_pcompra() * a);
                            break;

                            case 7:
                                std::cout << usuario.get_fondo() << std::endl;
                            break;

                            case 8:
                                continuar = false;
                            break;

                            default:
                                std::cout << "Opcion invalida";
                            break;
                        }
                    }
                }
                else if(contra == 0){
                    cont = false;
                }
                else
                    std::cout << "Contrasena incorrecta" << std::endl;
            break;
            case 2:
                std::cout << "Cantidad a vender: ";
                std::cin >> a;
                agua.venta(a);
                usuario.aumento(agua.get_pventa() * a);
            break;
            default:
                std::cout << "Opcion invaida" << std::endl;
        }
    }
}