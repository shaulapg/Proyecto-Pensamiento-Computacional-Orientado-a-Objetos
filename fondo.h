#include <iostream>

class Fondo{
    private:
    float cantidad;

    public:
    Fondo(): cantidad(0){};
    float get_cantidad();
    void set_cantidad(float);
    void ingreso(float);
    void retiro(float);
};

float Fondo::get_cantidad(){
    return cantidad;
}

void Fondo::set_cantidad(float cant){
    cantidad = cant;
}

void Fondo::ingreso(float ing){
    cantidad = cantidad + ing;
}

void Fondo::retiro(float ret){
    cantidad = cantidad - ret;
}