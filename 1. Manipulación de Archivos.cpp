#include <iostream>
#include <fstream>
#include <windows.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//****************************************************************************************************************************
//voids

void guardar(ofstream &es) { // archivo por referencia
	system("cls");
		struct persona{
			string 	nom, apel, ed, DPI;
		}p;
		es.open("Personas.txt", ios::out |ios::app);

		cout <<"Nombre de la Persona: "; 
		cin >> p.nom;
		cout <<"Apellido de la Persona: ";
		cin >> p.apel;
		cout <<"Edad de la Persona: ";
		cin >> p.ed;
		cout <<"Numero de DPI de la Persona: ";
		cin >> p.DPI;

		es<<p.nom<<"\n"<<p.apel<<"\n"<<p.ed<<"\n"<<p.DPI<<"\n";
		
		es.close();		//cierre de archivo
}

//-----------------------------------------------------------------------------------------------------------------------------
void leer(ifstream &Lec) {
    system("cls");
    
		struct persona{
			string 	nom, apel, ed, DPI;
		}ps;
		
	Lec.open("Personas.txt", ios::in);
	
	if (Lec.is_open()){ //para que no se cre un ciclo infinito
	
        cout << "---------------DATOS-------------------" << endl << endl;
        
		Lec >> ps.nom;
		
        while (!Lec.eof()) {
        	
        	Lec >> ps.apel;
			Lec >> ps.ed;
			Lec >>  ps.DPI;
            cout <<"Nombre de la Persona: " << ps.nom << endl;
            cout << "Apellido de la Persona: " << ps.apel << endl;
            cout << "Edad de la Persona: " << ps.ed << endl;
            cout << "Numero de DPI de la Persona: " << ps.DPI << endl;

            cout << "----------------------------------------------------" << endl;
            
            Lec >> ps.nom;
        }
    Lec.close();
	}else
		cout<<"Error al ejecutar el archivo..."<<endl;
    system("pause");
}

//****************************************************************************************************************************
//menu
int menu(){ 
	int x;
	system("cls");
	cout << "--------------Menu de opciones--------------" << endl;
        cout << "Seleccione una de las siguientes opciones:" << endl;
        cout << " 1. GUARDAR" << endl;
        cout << " 2. LEER" << endl;
        cout << " 3. SALIR" << endl;
        cout << endl;
		
		cout << "Elija una opcion: "; cin >> x;
		
		return x;
}

int main() {

    ofstream Esc; //declaracion de archivo
    ifstream Lec;
    int op;
    do{
    	
    	system("cls");
    	
    	op=menu();
		
			switch (op) { //op es el parametro de nuestro switch
		        case 1:
		        
		            system("cls");
		            guardar(Esc);
		            break;
		            
		        case 2:
		        	
		        	system("cls");
		        	leer(Lec);
		        	break;     	

			}
	}while (op !=3);
	
	return 0;

}

//************************************************************************************

