#include <iostream>
#include <string>
#include "articulos.h"
#include "empleados.h"
#include "jefe.h"

int main(){
    Articulo agua("Botella de agua",50,0,4.5,7.5);
    Empleados Juan("Juan Perez","matutino",2,1234,5000);
    Jefe Ana("Ana Garcia",1,9876,20000);
    int opcion;
    double continua = true;

    while (continua == true){
        std::cout << "1. Checar articulos: compra" << std::endl;
        std::cout << "2. Checar articulos: venta" << std::endl;
        std::cout << "3. Checar empleados: bono" << std::endl;
        std::cout << "4. Checar empleados: descuento" << std::endl;
        std::cout << "5. Checar jefe: retiro" << std::endl;
        std::cout << "6. Checar jefe: aumento" << std::endl;
        std::cout << "7. Salir" << std::endl;
        std::cout << "Elige una opcion: ";
        std::cin >> opcion;

        switch (opcion){
            case 1:
            int comp;
            std::cout << std::endl;
            std::cout << "Botellas compradas: ";
            std::cin >> comp;
            std::cout << "Producto: " << agua.get_nombre() << std::endl;
            std::cout << "Codigo: : " << agua.get_codigo() << std::endl;
            std::cout << "Precio compra: " << agua.get_pcompra() << std::endl;
            std::cout << "Precio venta: " << agua.get_pventa() << std::endl;
            std::cout << "Existencias: " << agua.get_existencia() << std::endl;
            agua.compra(comp);
            std::cout << std::endl;
            std::cout << "Producto: " << agua.get_nombre() << std::endl;
            std::cout << "Codigo: : " << agua.get_codigo() << std::endl;
            std::cout << "Precio compra: " << agua.get_pcompra() << std::endl;
            std::cout << "Precio venta: " << agua.get_pventa() << std::endl;
            std::cout << "Existencias despues de compra: " << agua.get_existencia() << std::endl;
            std::cout << std::endl;
            break;
            case 2:
            int vent;
            std::cout << std::endl;
            std::cout << "Botellas vendidas: ";
            std::cin >> vent;
            std::cout << "Producto: " << agua.get_nombre() << std::endl;
            std::cout << "Codigo: : " << agua.get_codigo() << std::endl;
            std::cout << "Precio compra: " << agua.get_pcompra() << std::endl;
            std::cout << "Precio venta: " << agua.get_pventa() << std::endl;
            std::cout << "Existencias: " << agua.get_existencia() << std::endl;
            agua.venta(vent);
            std::cout << std::endl;
            std::cout << "Producto: " << agua.get_nombre() << std::endl;
            std::cout << "Codigo: : " << agua.get_codigo() << std::endl;
            std::cout << "Precio compra: " << agua.get_pcompra() << std::endl;
            std::cout << "Precio venta: " << agua.get_pventa() << std::endl;
            std::cout << "Existencias despues de venta: " << agua.get_existencia() << std::endl;
            std::cout << std::endl;
            break;
            case 3:
            float bon;
            std::cout << std::endl;
            std::cout << "Porcentaje de bono: ";
            std::cin >> bon;
            std::cout << "Empleado: " << Juan.get_nombre() << std::endl;
            std::cout << "Turno: : " << Juan.get_turno() << std::endl;
            std::cout << "Codigo de empleado: " << Juan.get_codempleado() << std::endl;
            std::cout << "Contrasena: " << Juan.get_contrasena() << std::endl;
            std::cout << "Paga: " << Juan.get_paga() << std::endl;
            Juan.bono(bon);
            std::cout << std::endl;
            std::cout << "Empleado: " << Juan.get_nombre() << std::endl;
            std::cout << "Turno: : " << Juan.get_turno() << std::endl;
            std::cout << "Codigo de empleado: " << Juan.get_codempleado() << std::endl;
            std::cout << "Contrasena: " << Juan.get_contrasena() << std::endl;
            std::cout << "Paga con bono: " << Juan.get_paga() << std::endl;
            std::cout << std::endl;
            break;
            case 4:
            float desc;
            std::cout << std::endl;
            std::cout << "Porcentaje de descuento: ";
            std::cin >> desc;
            std::cout << "Empleado: " << Juan.get_nombre() << std::endl;
            std::cout << "Turno: : " << Juan.get_turno() << std::endl;
            std::cout << "Codigo de empleado: " << Juan.get_codempleado() << std::endl;
            std::cout << "Contrasena: " << Juan.get_contrasena() << std::endl;
            std::cout << "Paga: " << Juan.get_paga() << std::endl;
            Juan.descuento(desc);
            std::cout << std::endl;
            std::cout << "Empleado: " << Juan.get_nombre() << std::endl;
            std::cout << "Turno: : " << Juan.get_turno() << std::endl;
            std::cout << "Codigo de empleado: " << Juan.get_codempleado() << std::endl;
            std::cout << "Contrasena: " << Juan.get_contrasena() << std::endl;
            std::cout << "Paga con descuento: " << Juan.get_paga() << std::endl;
            std::cout << std::endl;
            break;
            case 5:
            float ret;
            std::cout << std::endl;
            std::cout << "Cantidad retirada: ";
            std::cin >> ret;
            std::cout << "Jefe: " << Ana.get_nombre() << std::endl;
            std::cout << "Codigo: " << Ana.get_codigo() << std::endl;
            std::cout << "Contrasena: " << Ana.get_contrasena() << std::endl;
            std::cout << "Ganancias: " << Ana.get_ganancias() << std::endl;
            Ana.retiro(ret);
            std::cout << std::endl;
            std::cout << "Jefe: " << Ana.get_nombre() << std::endl;
            std::cout << "Codigo: " << Ana.get_codigo() << std::endl;
            std::cout << "Contrasena: " << Ana.get_contrasena() << std::endl;
            std::cout << "Ganancias despues de retiro: " << Ana.get_ganancias() << std::endl;
            std::cout << std::endl;
            break;
            case 6:
            float aum;
            std::cout << std::endl;
            std::cout << "Cantidad ingresada: ";
            std::cin >> aum;
            std::cout << "Jefe: " << Ana.get_nombre() << std::endl;
            std::cout << "Codigo: " << Ana.get_codigo() << std::endl;
            std::cout << "Contrasena: " << Ana.get_contrasena() << std::endl;
            std::cout << "Ganancias: " << Ana.get_ganancias() << std::endl;
            Ana.aumento(aum);
            std::cout << std::endl;
            std::cout << "Jefe: " << Ana.get_nombre() << std::endl;
            std::cout << "Codigo: " << Ana.get_codigo() << std::endl;
            std::cout << "Contrasena: " << Ana.get_contrasena() << std::endl;
            std::cout << "Ganancias despues de ingreso: " << Ana.get_ganancias() << std::endl;
            std::cout << std::endl;
            break;
            case 7:
            continua = false;
        }
    }
}