#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{

double preciobase, preciototal, impuesto;
   
   cout << "Ingrese el precio base del articulo: $";
   cin >> preciobase;

// se hace un ciclo if para determinar cual es el impuesto
   if (preciobase <= 2000) { 		
      preciototal = preciobase;
      impuesto = 0;
   } else if (preciobase <= 4000) {
      impuesto = 0.30;
   } else if (preciobase <= 50000) {
      impuesto = 0.40;
   } else {
      impuesto = 0.50;
   }

	// calculo para el precio total
   preciototal = preciobase * (1 + impuesto);

   cout << "El precio total del articulo es: $" << preciototal << endl;
   
   
	return 0;
}
