#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{

int sumaImpares = 0, contadorPares = 0, sumaPares = 0;

    for (int i = 1; i <= 270; i++) {
        if (i % 2 != 0) { // aqui vemos si el numero es impar
            sumaImpares += i;
        } else { // Si no, es par
            contadorPares++;
            sumaPares += i;
        }
    }

	// aqui hacemos el calculo
    double promedioPares = static_cast<double>(sumaPares) / contadorPares;

	// se muestra en pantalla la suma de los impares y el promedio de pares
    cout << "La suma de los numeros impares es de: " << sumaImpares << endl;
    cout << "El promedio de los numeros pares es de: " << promedioPares << endl;
    
    	return 0;
}
