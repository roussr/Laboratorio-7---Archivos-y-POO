#include <iostream>
#include <string>

using namespace std;

//-----------------------------------------------------------------------------------------------------------------------------------------------------------
//Declaracion de clase
class Persona {
	// Declaracion de parametros de manera privada
private:
    string nombre, ocupacion;
    int edad;
	// Declaracion de parametros de manera publica
public:
	//Declaracion de procesos y funciones de manera publica para cada parametro que constituye el objeto
    void setNom(string n) {
        nombre = n;
    }

    string getNom() {
        return nombre;
    }

    void setEdad(int e) {
        edad = e;
    }

    int getEdad() {
        return edad;
    }

    void setOcup(string o) {
        ocupacion = o;
    }

    string getOcup() {
        return ocupacion;
    }
};
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
//declaracion de funcion main
int main() {
	
	cout << "--------------------- Registro de Personas ---------------------" << endl<< endl;
	//Impresion de parametros
    Persona persona1;
// Crear objetos de la clase persona utilizando el constructor con parámetros
    persona1.setNom("Carlos");
    persona1.setEdad(20);
    persona1.setOcup("Ingeniero");

    cout << "Nombre: " << persona1.getNom() << endl;
    cout << "Edad: " << persona1.getEdad() << endl;
    cout << "Ocupacion: " << persona1.getOcup() << endl<< endl;
    //Impresion de parametros
    Persona persona2;
// Crear objetos de la clase persona utilizando el constructor con parámetros
    persona2.setNom("Paola");
    persona2.setEdad(40);
    persona2.setOcup("Doctora");

    cout << "Nombre: " << persona2.getNom() << endl;
    cout << "Edad: " << persona2.getEdad() << endl;
    cout << "Ocupacion: " << persona2.getOcup() << endl;

    return 0;
}

