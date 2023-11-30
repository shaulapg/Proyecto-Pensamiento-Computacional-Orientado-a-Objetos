# Proyecto-Pensamiento-Computacional-Orientado-a-Objetos

# Descripcion y funcionalidad

Proyecto que maneja los ingresos y egresos de una tienda, siendo estos, la compra de productos, la paga a los empleados, ventas, entre otros.

El proyecto cuenta con dos tipos de personas: Empleados y Jefes. El usuario hace de jefe, pudiendo consultar tanto el fondo de dinero de la tienda (que se altera con cada movimiento que se hace), el empleado, los articulos y hacer otra serie de acciones.
A parte de las personas, hay un objeto más, que es "Articulos" el cual simplemente almacena a estos para poder hacer las acciones como su venta o compra.

Se comienza ingresando los datos para poder crear al Jefe, despues se elige si se quiere entrar como empleado (solo se puede vender en esta seccion) o como jefe (donde se pueden hacer todas las funciones disponibles). Para entrar como jefe se debe ingresar la contrasena que se ingreso como digitos al principio. Por fines practicos de revision, se proyevtan los datos del jefe despues de ser ingresados y asi no se pierde la contrasena. Si se hace alguna accion que altere el fondo, por ejemplo paga al empleado, se puede revisar el fondo por las alteraciones que se sufrio.

# Consideraciones

Idioma de interfaz: Español
Lenguaje: C++ estarndar
Compilar en terminal con g++ PlantaToyota.cpp Modelo.h Work.h
Windows a.exe
Linux ./a.out

# Correcciones

Version 1: Se crearon loa archivos main.cpp articulo.h jefe.h empleados.h Los archivos .h tenian sus respectivos objetos, nombrados igual que el archivo, mientras que el main tenía una interfaz de usuario basica.
SICT0303-Implementación de acciones: Se crearon los archivos a base de la necesidad del proyecto.
