#include <iostream>
#include <string>

using namespace std;

//-----------------------------------------------------------------------------------------------------------------------------------------------------------
// Definición de la clase Persona
class Persona {
	// Declaracion de parametros de manera privada
private:
    string nombre;
    int edad;
    string ocupacion;

public:
    Persona(string nom, int ed, string oc) : nombre(nom), edad(ed), ocupacion(oc) {}
//Declaracion de procesos y funciones de manera publica para cada parametro que constituye el objeto
    void setNombre(string nom) {
        nombre = nom;
    }

    string getNombre() {
        return nombre;
    }

    void setEdad(int ed) {
        edad = ed;
    }

    int getEdad() {
        return edad;
    }

    void setOcupacion(string oc) {
        ocupacion = oc;
    }

    string getOcupacion() {
        return ocupacion;
    }
};
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
// Definición de la clase Estudiante que hereda de Persona
class Estudiante : public Persona {
private:
	// Declaracion de parametros de manera privada
    int numeroEstudiante;
    float promedioCalificaciones;

public:
	// Declaracion de parametros de manera publica +  parametros heredados de la clase persona
    Estudiante(string nom, int ed, string oc, int nume, float prom) : Persona(nom, ed, oc), numeroEstudiante(nume), promedioCalificaciones(prom) {}
	//Declaracion de procesos y funciones de manera publica para cada parametro que constituye el objeto
    void setNumeroEstudiante(int nume) {
        numeroEstudiante = nume;
    }

    int getNumeroEstudiante() {
        return numeroEstudiante;
    }

    void setPromedioCalificaciones(float prom) {
        promedioCalificaciones = prom;
    }

    float getPromedioCalificaciones() {
        return promedioCalificaciones;
    }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------
//declaracion de funcion main
int main() {
	
	cout << "--------------------- Registro de Estudiantes ---------------------" << endl<< endl;

	// Crear objetos de la clase estudiante utilizando el constructor con parámetros
    Estudiante estudiante1("Maria", 20, "Estudiante", 12345, 8.5);
	//Impresion de parametros
    cout << "Nombre: " << estudiante1.getNombre() << endl;
    cout << "Edad: " << estudiante1.getEdad() << endl;
    cout << "Ocupacion: " << estudiante1.getOcupacion() << endl;
    cout << "Numero de estudiante: " << estudiante1.getNumeroEstudiante() << endl;
    cout << "Promedio de calificaciones: " << estudiante1.getPromedioCalificaciones() << endl;

    return 0;
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
