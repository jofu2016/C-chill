#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{

  int num1, num2;

    // Solicitamos al usuario los dos números enteros
    cout << "Ingrese el primer numero entero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero entero: ";
    cin >> num2;

    // Verificamos si el segundo es el cuadrado exacto del primero
    if (num2 == num1 * num1) {
        cout << "El segundo es el cuadrado exacto del primero." << endl;
    }

    // Verificamos si el segundo es menor que el cuadrado del primero
    else if (num2 < num1 * num1) {
        cout << "El segundo es menor que el cuadrado del primero." << endl;
    }

    // Si no se cumplen las dos condiciones anteriores, entonces el segundo es mayor que el cuadrado del primero
    else {
        cout << "El segundo es mayor que el cuadrado del primero." << endl;
    }  
    	return 0;
}
