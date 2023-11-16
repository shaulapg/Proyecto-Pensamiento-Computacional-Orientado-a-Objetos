#include <string>

class Empleados{
    private:
    std::string nombre, turno;
    int codempleado, contrasena, num_emp=0;
    float sueldo, paga;

    public:
    Empleados(): nombre(""), turno(""), codempleado(0), contrasena(0), sueldo(0), paga (0){};
    Empleados(std::string nom, std::string turn, int cont, float suel): nombre(nom), turno(turn), codempleado(num_emp), contrasena(cont), sueldo(suel), paga(0){
        num_emp = num_emp + 1;
    };

    std::string get_nombre();
    std::string get_turno();
    int get_contrasena();
    int get_codempleado();
    float get_sueldo();
    float get_paga();

    void set_nombre(std::string);
    void set_turno(std::string);
    void set_contrasena(int);
    void set_codempleado(int);
    void set_sueldo(float);
    void set_paga(float);

    void bono(float bon);
    void descuento(float desc);
};

std::string Empleados::get_nombre(){
    return nombre;
}

std::string Empleados::get_turno(){
    return turno;
}

int Empleados::get_contrasena(){
    return contrasena;
}

int Empleados::get_codempleado(){
    return codempleado;
}

float Empleados::get_sueldo(){
    return sueldo;
}

float Empleados::get_paga(){
    return paga;
}

void Empleados::set_nombre(std::string nom){
    nombre = nom;
}

void Empleados::set_turno(std::string turn){
    turno = turn;
}

void Empleados::set_contrasena(int cont){
    contrasena = cont;
}

void Empleados::set_codempleado(int codemp){
    codempleado = codemp;
}

void Empleados::set_sueldo(float suel){
    sueldo = suel;
}

void Empleados::set_paga(float pag){
    paga = pag;
}

void Empleados::bono(float bon){
    paga = paga + sueldo * bon;
}

void Empleados::descuento(float desc){
    paga = paga - sueldo * desc;
}