#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{

double sueldo, horas_extras, precio_extra, pago_total;
   int categoria;
   
   cout << "Ingrese el sueldo base del trabajador: $";                // se solicita el sueldo base
   cin >> sueldo;
   cout << "Ingrese la cantidad de horas extras trabajadas: ";         // se solicitan las horas extras
   cin >> horas_extras;
   cout << "Ingrese la categoria del trabajador (1-4): ";             // se solicita la categoria del trabajador
   cin >> categoria; 

// se hace un ciclo con if-else para determinar el precio de la hora extra según la categoría del trabajador
   if (categoria == 1) {
      precio_extra = 30.0;
      horas_extras = min(horas_extras, 30.0);         // aqui solo le contaran las 30horas como maxim    
   } else if (categoria == 2) {                       
      precio_extra = 38.0;
      horas_extras = min(horas_extras, 30.0);         // aqui solo le contaran las 30horas como maximo   
   } else if (categoria == 3) {                       
      precio_extra = 50.0;
      horas_extras = min(horas_extras, 30.0);         // aqui solo le contaran las 30horas como maximo   
   } else if (categoria == 4 ) {                    
      precio_extra = 00.0;  
      horas_extras = min(horas_extras, 30.0);              // aqui solo le contaran las 30horas como maximo
   } else { 
      cout << "Categoria invalida. Intente nuevamente." << endl; // si no seleccionamos cat del 1-4 nos envia este msg
      return 0;
   }

   pago_total = sueldo + horas_extras * precio_extra;                      // calculo del pago total

   cout << "El pago total que se le debe hacer al trabajador es: $" << pago_total << endl; // mostramos el pago

	return 0;
}
