#include <iostream>
<<<<<<< HEAD
#include <fstream>
#include <sstream>
using namespace std;
int main (){
	ifstream archivoEntrada ("input/archivoEntrada.txt");
	if (archivoEntrada.is_open()){
    cout<<"Archivo abierto" <<endl;
    string linea;
    while (getline (archivoEntrada, linea)) {
	}
	
	}
=======
#include<fstream>
#include<sstream>

using namespace std;
int main (){
	ifstream archivoEntrada("input/archivosEntrada.txt");
	ofstream archivoSalida("output/archivoSalida.txt");
	
	if (archivoEntrada.is_open()) {
		cout<<"Archivo abierto"<<endl;
		string linea;
		
		while (getline (archivoEntrada, linea)) {
			archivoSalida << linea;
		}
	}cout<<"Archivo copiado correctamente"<<endl;
>>>>>>> 2ef7ae39c41815cb12a45fa14af4c8effc873717
}
