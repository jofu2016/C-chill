#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{

 double capital, tasaInteres, capitalFinal;
    int anios;

    // Solicitamos al usuario los datos necesarios
    cout << "Ingrese la cantidad de dolares: $";
    cin >> capital;

    cout << "Ingrese la tasa de interes (en porcentaje): ";
    cin >> tasaInteres;

    cout << "Ingrese el numero de años: ";
    cin >> anios;

    // Calculamos el capital final
    capitalFinal = capital * (1 + tasaInteres / 100 * anios);

    // Mostramos el capital final al usuario
    cout << "El capital final es: $" << capitalFinal << endl;



	return 0;
}
