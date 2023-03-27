#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{

   int clave;
    float precio, costoTotal, minutos;

// Se muestran las opciones disponibles para la selección de la zona geográfica
    cout << "Claves por zona geografica" << endl;
    cout << "America del Norte = 12 \n";
    cout << "America Central = 15 \n";
    cout << "America del Sur = 18 \n";
    cout << "Europa = 19 \n";
    cout << "Asia = 23 \n";						
    cout << "Africa = 25 \n";
    cout << "Oceania = 29 \n\n";
   cout << "Ingrese la clave de la zona geografica: " << endl; cin >> clave; 

	if (clave == 12) {
    precio = 2;
    cout << "Zona geografica: America del Norte\n";
	} else if (clave == 15) {
    precio = 2.2;
    cout << "Zona geografica: America Central\n";
	} else if (clave == 18) {
    precio = 4.5;
    cout << "Zona geografica: America del Sur\n";
	} else if (clave == 19) {
    precio = 3.5;
    cout << "Zona geografica: Europa\n";
	} else if (clave == 23) {
    precio = 6;
    cout << "Zona geografica: Asia\n";
	} else if (clave == 25) {
    precio = 6;
    cout << "Zona geografica: Africa\n";
	} else if (clave == 29) {
    precio = 5;
    cout << "Zona geografica: Oceania\n";
	} else {
    cout << "Clave de zona invalida.\n";		// Si la clave ingresada no corresponde a ninguna de las opciones disponibles           
    return 0;									//se muestra un mensaje de error y se sale del programa
	}

	
	// se pide la cantidad de minutos hablados
    cout << "\n Ingrese la cantidad de minutos hablados: ";
    cin >> minutos;

	// se realiza el calculo final y se muestra por pantalla
    costoTotal = precio * minutos;
    cout << "Costo total de la llamada: $" << costoTotal << endl;

    	return 0;
}
