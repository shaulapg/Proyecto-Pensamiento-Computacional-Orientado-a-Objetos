# Proyecto-Pensamiento-Computacional-Orientado-a-Objetos

# Descripcion y funcionalidad

Proyecto que maneja los ingresos y egresos de una tienda, siendo estos, la compra de productos, la paga a los empleados, ventas, entre otros.

El proyecto cuenta con dos tipos de personas: Empleados y Jefes. El usuario hace de jefe, pudiendo consultar tanto el fondo de dinero de la tienda (que se altera con cada movimiento que se hace), el empleado, los articulos y hacer otra serie de acciones.
A parte de las personas, hay un objeto más, que es "Articulos" el cual simplemente almacena a estos para poder hacer las acciones como su venta o compra.

Se comienza ingresando los datos para poder crear al Jefe, despues se elige si se quiere entrar como empleado (solo se puede vender en esta seccion) o como jefe (donde se pueden hacer todas las funciones disponibles). Para entrar como jefe se debe ingresar la contrasena que se ingreso como digitos al principio. Por fines practicos de revision, se proyevtan los datos del jefe despues de ser ingresados y asi no se pierde la contrasena. Si se hace alguna accion que altere el fondo, por ejemplo paga al empleado, se puede revisar el fondo por las alteraciones que se sufrio.

# Consideraciones

Idioma de interfaz: Español

Lenguaje: C++ estarndar

Compilar en terminal con g++ main.cpp articulos.h fondo.h personas.h

Windows a.exe

Linux ./a.out

# Correcciones

Version 1: Se crearon los archivos main.cpp articulo.h jefe.h empleados.h Los archivos .h tenian sus respectivos objetos, nombrados igual que el archivo. No todas las funciones estaban disponibles, además de que las ganancias no funcioanaban completamente [lineas 55-65 en Jefe.h].
SICT0303-Implementación de acciones: Creacion de constructores, getters y setters [13-74 en articulos.h] [13-81 en empleados.h] [14-65 en jefe.h].
SICT0401-Aplicación de estándares y normas: Implementacion del readme.
SEG0702-Tecnologías de vanguardia: Uso de github.

Version 2: No hubo alteración del cógido. Implementación del diagrama UML.
SICT0302-Toma de decisiones: Diseño del diagrama de clases basado en las necesidades del proyecto, agregando herencia y señalando la ultilidad y funcionamiento de las clases.

Version 3: Se implemento la idea base del diagrama, pero este se corrigio. Se agrego el archivo fondo.h en vez de tenerlo como un atributo de Jefe, ademas de agregar la herencia: se creo personas.h para poder derivar Jefe [lineas 109-138] y Empleados [lineas 66-107]. Respecto al diagrama se adapto la interaccion simple de las clases.
SICT0302-Toma de decisiones: Se utilizo agrgacion en el diagrama de clases. Se adapto el codigo al UML: "Se agrego el archivo fondo.h en vez de tenerlo como un atributo de Jefe."
SICT0303-Implementación de acciones: Implementacion de herencia: "Se agrego la herencia: se creo personas.h para poder derivar Jefe [lineas 109-138] y Empleados [lineas 66-107]."
SICT0401-Aplicación de estándares y normas: Se siguio el formato de codigo para un mejor entendimiento de este.
SEG0702-Tecnologías de vanguardia: Acutalizacion de github.

Version 4: Se agregaron comentarios en todo el codigo. Se arreglo un prorblema minimo en la opcion de compra de articulos [lineas 97-98 en main.cpp]
SICT0401-Aplicación de estándares y normas: Se crearon comentarios explicativos en todos los archivos para una mejor exposicion del codigo.
SEG0702-Tecnologías de vanguardia: Acutalizacion del readme.
